/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 14:56:34 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	ClapTrap::_name = "Nameless";
	std::cout << "I AM " << ClapTrap::_name << ", SCCCAAAAAAVV(trap)S RULLEEEE!!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_) {
	std::cout << "I AM " << ClapTrap::_name << ", SCCCAAAAAAVV(trap)S RULLEEEE!!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	*this = src;
	srand((int) time(0));
	_setStats();
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << ClapTrap::_name << ": THE LIGHTS, NOOOO MOOMMYYY" << std::endl;
	return;
}

void			ScavTrap::_setStats() {
	ClapTrap::_energyPoints = 50;
	ClapTrap::_maxEnergyPoints = 50;
	ClapTrap::_meleeAttackDamage = 20;
	ClapTrap::_rangedAttackDamage = 15;
	ClapTrap::_armorDamageReduction = 3;
}

void			ScavTrap::challengeNewcomer(std::string const & target) {
	std::cout << "ScavTrap " << ClapTrap::_name << " challenges the newcomer " << target << " to " << _challenges[(rand() % 5)] << std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs) {
	ClapTrap::_name = rhs._name;
	ClapTrap::_hitPoints = rhs._hitPoints;
	ClapTrap::_maxHitPoints = rhs._maxHitPoints;
	ClapTrap::_energyPoints = rhs._energyPoints;
	ClapTrap::_maxEnergyPoints = rhs._maxEnergyPoints;
	ClapTrap::_level = rhs._level;
	ClapTrap::_meleeAttackDamage = rhs._meleeAttackDamage;
	ClapTrap::_rangedAttackDamage = rhs._rangedAttackDamage;
	ClapTrap::_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "I AM A COPY OF " << ClapTrap::_name << ", SCCCAAAAAAVVS RULLEEEE!!" << std::endl;
	return *this;
}
