/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 17:10:18 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	_name = "Nameless";
	std::cout << "I am a SuperTrap-1000, my name is " << _name << ", prepare to have you ass kicked." << std::endl;
	_setStats();
	return;
}

SuperTrap::SuperTrap(std::string name_) : ClapTrap(name_), FragTrap(name_), NinjaTrap(name_) {
	std::cout << "I am a SuperTrap-1000, my name is " << _name << ", prepare to have you ass kicked." << std::endl;
	_setStats();
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src), FragTrap(src), NinjaTrap(src) {
	*this = src;
	_setStats();
	return;
}

void			SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}

void			SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap(void) {
	std::cout << "SuperTrap " << _name << ": has self destructed." << std::endl;
	return;
}

void			SuperTrap::_setStats() {
	FragTrap::_hitPoints = 100;
	FragTrap::_maxHitPoints = 100;
	NinjaTrap::_energyPoints = 120;
	NinjaTrap::_maxEnergyPoints = 120;
	NinjaTrap::_meleeAttackDamage = 60;
	FragTrap::_rangedAttackDamage = 20;
	FragTrap::_armorDamageReduction = 5;
}

SuperTrap &		SuperTrap::operator=(SuperTrap const & rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_meleeAttackDamage = rhs._meleeAttackDamage;
	_rangedAttackDamage = rhs._rangedAttackDamage;
	_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "I am a copy SuperTrap-1000, my name is " << _name << ", prepare to have you ass kicked." << std::endl;
	return *this;
}
