/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:55:53 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
	ClapTrap::_name = "Nameless";
	std::cout << "I am a SuperTrap-1000, my name is " << ClapTrap::_name << ", prepare to have you ass kicked." << std::endl;
	_setStats();
	return;
}

SuperTrap::SuperTrap(std::string name_) : ClapTrap(name_), FragTrap(name_), NinjaTrap(name_) {
	std::cout << "I am a SuperTrap-1000, my name is " << ClapTrap::_name << ", prepare to have you ass kicked." << std::endl;
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
	ClapTrap::_hitPoints = FragTrap::_hitPoints;
	ClapTrap::_maxHitPoints = FragTrap::_maxHitPoints;
	ClapTrap::_energyPoints = NinjaTrap::_energyPoints;
	ClapTrap::_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	ClapTrap::_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	ClapTrap::_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	ClapTrap::_armorDamageReduction = FragTrap::_rangedAttackDamage;
}

SuperTrap &		SuperTrap::operator=(SuperTrap const & rhs) {
	ClapTrap::_name = rhs._name;
	ClapTrap::_hitPoints = rhs.ClapTrap::_hitPoints;
	ClapTrap::_maxHitPoints = rhs.ClapTrap::_maxHitPoints;
	ClapTrap::_energyPoints = rhs.ClapTrap::_energyPoints;
	ClapTrap::_maxEnergyPoints = rhs.ClapTrap::_maxEnergyPoints;
	ClapTrap::_level = rhs.ClapTrap::_level;
	ClapTrap::_meleeAttackDamage = rhs.ClapTrap::_meleeAttackDamage;
	ClapTrap::_rangedAttackDamage = rhs.ClapTrap::_rangedAttackDamage;
	ClapTrap::_armorDamageReduction = rhs.ClapTrap::_armorDamageReduction;
	std::cout << "I am a copy SuperTrap-1000, my name is " << ClapTrap::_name << ", prepare to have you ass kicked." << std::endl;
	return *this;
}
