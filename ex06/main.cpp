/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:46:01 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/13 15:37:51 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	getLevelIndex(const std::string& level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	Harl		harl;
	std::string	level;
	int			levelIndex;

	if (argc != 2)
	{
		std::cout << "Error: try " << argv[0] << " <level>" << std::endl;
		return (1);
	}
	level = argv[1];
	levelIndex = getLevelIndex(level);
	switch (levelIndex)
	{
		case 0:
			harl.complain("DEBUG");
			//FALLTHROUGH
		case 1:
			harl.complain("INFO");
			//FALLTHROUGH
		case 2:
			harl.complain("WARNING");
			//FALLTHROUGH
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout	<< "[ Propably complaining about insignificant problems ]"
						<< std::endl;
			break ;
	}
	return (0);
}