/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 13:55:22 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	_name = "Nameless";
	std::cout << "I AM " << _name << ", SCCCAAAAAAVV(trap)S RULLEEEE!!" << std::endl;
	srand((int) time(0));
	return;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_), _name(name_) {
	std::cout << "I AM " << _name << ", SCCCAAAAAAVV(trap)S RULLEEEE!!" << std::endl;
	srand((int) time(0));
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

//void			ScavTrap::rangedAttack(std::string const & target) const {
	//std::cout << "ScavTrap " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage!" << std::endl;
//}
//void			ScavTrap::meleeAttack(std::string const & target) const {
	//std::cout << "ScavTrap " << _name << " melee attacks " << target << ", causing " << _meleeAttackDamage << " points of damage!" << std::endl;
//}
//void			ScavTrap::takeDamage(unsigned int amount) {
	//amount -= _armorDamageReduction;
	//_hitPoints -= amount;
	//if (_hitPoints < 0)
		//_hitPoints = 0;
	//std::cout << "ScavTrap " << _name << " takes " << amount << " damage, causing it's health to drop to " << _hitPoints << "/" << _maxHitPoints << "!" << std::endl;
//}
//void			ScavTrap::beRepaired(unsigned int amount) {
	//_hitPoints += amount;
	//if (_hitPoints > _maxHitPoints)
		//_hitPoints = _maxHitPoints;
	//std::cout << "ScavTrap " << _name << " is repaired " << amount << " damage, causing it's health to rise to " << _hitPoints << "/" << _maxHitPoints << "!" << std::endl;
//}

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
