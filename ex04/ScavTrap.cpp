/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:44:54 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	_name = "Nameless";
	std::cout << "I AM " << _name << ", SCCCAAAAAAVV(trap)S RULLEEEE!!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_) {
	std::cout << "I AM " << _name << ", SCCCAAAAAAVV(trap)S RULLEEEE!!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src) {
	*this = src;
	srand((int) time(0));
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << _name << ": THE LIGHTS, NOOOO MOOMMYYY" << std::endl;
	return;
}

void			ScavTrap::_setStats() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_challenges[0] = "balance a grenade on your head for a minute!";
	_challenges[1] = "throw me all your rarest guns. ;)";
	_challenges[2] = "fight the Psycho Midget King!";
	_challenges[3] = "duel one of your teammates!";
	_challenges[4] = "take on the Vault Guardian. (good luck)";
}

void			ScavTrap::challengeNewcomer(std::string const & target) {
	std::cout << "ScavTrap " << _name << " challenges the newcomer " << target << " to " << _challenges[(rand() % 5)] << std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_meleeAttackDamage = rhs._meleeAttackDamage;
	_rangedAttackDamage = rhs._rangedAttackDamage;
	_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "I AM A COPY OF " << _name << ", SCCCAAAAAAVVS RULLEEEE!!" << std::endl;
	return *this;
}
