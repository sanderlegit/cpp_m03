/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:02:32 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	_name = "Nameless";
	std::cout << "Welcome to Firestone, I am FR4G-TP, but you may call me by my locally designated name " << _name << "!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

FragTrap::FragTrap(std::string name_) : _name(name_) {
	std::cout << "Welcome to Firestone, I am FR4G-TP, but you may call me by my locally designated name " << _name << "!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

void		FragTrap::_setStats() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_dot_exe_attacks[0] = "(Funzerker) I'm a sexy dinosaur! Rawr!";
	_dot_exe_attacks[1] = "(Meat Unicycle) (unintelligible snarling)";
	_dot_exe_attacks[2] = "(Gun Wizard) You can call me Gundalf!";
	_dot_exe_attacks[3] = "(Pirate Ship Mode) Avast ye scurvy dogs!";
	_dot_exe_attacks[4] = "(Laser Inferno) Boogie time!";
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
	srand((int) time(0));
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << _name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	return;
}

void			FragTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage!" << std::endl;
}
void			FragTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << _name << " melee attacks " << target << ", causing " << _meleeAttackDamage << " points of damage!" << std::endl;
}
void			FragTrap::takeDamage(unsigned int amount) {
	if ((int)amount > _armorDamageReduction)
		amount -= _armorDamageReduction;
	else
		amount = 0;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "FR4G-TP " << _name << " takes " << amount << " damage, causing it's health to drop to " << _hitPoints << "/" << _maxHitPoints << "!" << std::endl;
}
void			FragTrap::beRepaired(unsigned int amount) {
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "FR4G-TP " << _name << " is repaired " << amount << " damage, causing it's health to rise to " << _hitPoints << "/" << _maxHitPoints << "!" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (_energyPoints >= 25) {
		_energyPoints -= 25;
		std::cout << "FR4G-TP " << _name << ": vaulthunter_dot_exe: "  << _dot_exe_attacks[(rand() % 5)] << " (Energy " << _energyPoints << ")" << std::endl;
		std::cout << "	attacks " << target << ", causing " << _rangedAttackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "FR4G-TP " << _name << ": vaulthunter_dot_exe: ARGH I'm OUT of ENERGY! (" << _energyPoints << ")" << std::endl;
	}
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs) {
	_name = rhs._name;
	_hitPoints = rhs._hitPoints;
	_maxHitPoints = rhs._maxHitPoints;
	_energyPoints = rhs._energyPoints;
	_maxEnergyPoints = rhs._maxEnergyPoints;
	_level = rhs._level;
	_meleeAttackDamage = rhs._meleeAttackDamage;
	_rangedAttackDamage = rhs._rangedAttackDamage;
	_armorDamageReduction = rhs._armorDamageReduction;
	std::cout << "Welcome to Firestone, I am a equals operator FR4G-TP, but you may call me by my locally designated name " << _name << "!" << std::endl;
	return *this;
}
