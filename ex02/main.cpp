/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:24:57 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/13 14:52:37 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		str;
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	
	std::cout	<< "Address of str: " << &str
				<< "\nAddress held by stringPTR: " << stringPTR
				<< "\nAddress held by stringREF: " << &stringREF << std::endl;
	
	std::cout	<< "Value of str: " << str
				<< "\nValue pointed to by stringPTR: " << *stringPTR
				<< "\nValue pointed to by stringREF: " << stringREF << std::endl;
	
	return (0);
}
