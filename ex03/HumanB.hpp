#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB
{
private:
	std::string	name;
	Weapon*		weapon;

public:
	HumanB(std::string name);
	void	attack() const;
	void	setWeapon(Weapon& weapon);
};

#endif