/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:27:47 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/10 14:20:57 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie1;

	zombie1 = newZombie("Shaun");
	zombie1->announce();
	delete zombie1;

	randomChump("Greg");
	
	return (0);
}
