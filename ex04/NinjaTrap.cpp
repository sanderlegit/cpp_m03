/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 17:05:14 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
	_name = "Nameless";
	std::cout << "shhhh.. I am a NinjaTrap unit, my name is " << _name << "!" << std::endl;
	_setStats();
	return;
}

NinjaTrap::NinjaTrap(std::string name_) : ClapTrap(name_) {
	std::cout << "shhhh.. I am a NinjaTrap unit, my name is " << _name << "!" << std::endl;
	_setStats();
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src) {
	*this = src;
	_setStats();
	return;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap " << _name << ": has committed seppuku." << std::endl;
	return;
}

void			NinjaTrap::_setStats() {
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

void			NinjaTrap::ninjaShoebox(ClapTrap & target) {
	std::cout << "KARATE SLICE! I attack you ClapTrap unit" << std::endl;
	target.takeDamage(40);
}

void			NinjaTrap::ninjaShoebox(FragTrap & target) {
	std::cout << "SPINNING KICK! I attack you FragTrap unit" << std::endl;
	target.takeDamage(3);
}

void			NinjaTrap::ninjaShoebox(ScavTrap & target) {
	std::cout << "SUPERMAN PUNCH! I attack you ScavTrap unit" << std::endl;
	target.takeDamage(4);
}

void			NinjaTrap::ninjaShoebox(NinjaTrap & target) {
	std::cout << "KNEE JAB! I attack you fellow NinjaTrap unit" << std::endl;
	target.takeDamage(2);
}

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_meleeAttackDamage = rhs._meleeAttackDamage;
	_rangedAttackDamage = rhs._rangedAttackDamage;
	_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "shhhh.. I am a NinjaTrap unit, my name is " << _name << "!" << std::endl;
	return *this;
}
