/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:04:17 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/13 15:37:23 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string	replaceStr(const std::string& src, const std::string& s1, const std::string& s2)
{
	std::string	result;
	size_t		pos;
	size_t		found;

	pos = 0;
	while ((found = src.find(s1, pos)) != std::string::npos)
	{
		result += src.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += src.substr(pos);
	return (result);
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::string	content;
	std::string	line;
	std::string	replaced;

	if (argc != 4)
	{
		std::cout << "Error: try " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cout << "Error: cannot open input file" << std::endl;
		return (1);
	}
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cout << "Error: cannot create output file" << std::endl;
		inFile.close();
		return (1);
	}
	while (std::getline(inFile, line))
	{
		content += line;
		if (!inFile.eof())
			content += "\n";
	}
	replaced = replaceStr(content, s1, s2);
	outFile << replaced;
	inFile.close();
	outFile.close();
	return (0);
}
