/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:16:10 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	_name = "Nameless";
	std::cout << "I am an original ClapTrap unit, my name is " << _name << "!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

ClapTrap::ClapTrap(std::string name_) : _name(name_) {
	std::cout << "I am an original ClapTrap unit, my name is " << _name << "!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	srand((int) time(0));
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << _name << ": has died of lack of spare parts." << std::endl;
	return;
}

void			ClapTrap::_setStats() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

void			ClapTrap::rangedAttack(std::string const & target) const {
	std::cout << "ClapTrap " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage!" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << "ClapTrap " << _name << " melee attacks " << target << ", causing " << _meleeAttackDamage << " points of damage!" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount > _armorDamageReduction)
		amount -= _armorDamageReduction;
	else
		amount = 0;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage, causing it's health to drop to " << _hitPoints << "/" << _maxHitPoints << "!" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount) {
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "ClapTrap " << _name << " is repaired " << amount << " damage, causing it's health to rise to " << _hitPoints << "/" << _maxHitPoints << "!" << std::endl;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_meleeAttackDamage = rhs._meleeAttackDamage;
	_rangedAttackDamage = rhs._rangedAttackDamage;
	_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "I am a copy of an original ClapTrap unit, my name is " << _name << "!" << std::endl;
	return *this;
}
