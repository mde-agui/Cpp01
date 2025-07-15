/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:38:13 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/13 15:36:37 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie*		horde;
	int			N;
	std::string	name;

	if (argc != 3)
	{
		std::cout	<< "Error: Hint: " << argv[0]
					<< " <number_of_zombies> <base_name>" << std::endl;
		return (1);
	}
	N = std::atoi(argv[1]);
	if (N <= 0)
	{
		std::cout << "Error: Number of Zombies must be positive!" << std::endl;
		return (1);
	}
	name = argv[2];
	if (name.empty())
	{
		std::cout << "Error: Base name connot be empty!" << std::endl;
		return (1);
	}
	horde = zombieHorde(N, name);
	if (!horde)
	{
		std::cout << "Failed to create horde" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	
	return (0);
}
