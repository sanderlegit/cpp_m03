/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:16:01 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
	ClapTrap::_name = "Nameless";
	std::cout << "shhhh.. I am a NinjaTrap unit, my name is " << ClapTrap::_name << "!" << std::endl;
	_setStats();
	return;
}

NinjaTrap::NinjaTrap(std::string name_) : ClapTrap(name_) {
	std::cout << "shhhh.. I am a NinjaTrap unit, my name is " << ClapTrap::_name << "!" << std::endl;
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
	ClapTrap::_hitPoints = 60;
	ClapTrap::_maxHitPoints = 60;
	ClapTrap::_energyPoints = 120;
	ClapTrap::_maxEnergyPoints = 120;
	ClapTrap::_meleeAttackDamage = 60;
	ClapTrap::_rangedAttackDamage = 5;
	ClapTrap::_armorDamageReduction = 0;
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
	ClapTrap::_name = rhs._name;
	ClapTrap::_hitPoints = rhs._hitPoints;
	ClapTrap::_maxHitPoints = rhs._maxHitPoints;
	ClapTrap::_energyPoints = rhs._energyPoints;
	ClapTrap::_maxEnergyPoints = rhs._maxEnergyPoints;
	ClapTrap::_level = rhs._level;
	ClapTrap::_meleeAttackDamage = rhs._meleeAttackDamage;
	ClapTrap::_rangedAttackDamage = rhs._rangedAttackDamage;
	ClapTrap::_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "shhhh.. I am a NinjaTrap unit, my name is " << ClapTrap::_name << "!" << std::endl;
	return *this;
}
