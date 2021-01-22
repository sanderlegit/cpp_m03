/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:16:16 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	ClapTrap::_name = "Nameless";
	std::cout << "Welcome to Firestone, I am FR4G-TP, but you may call me by my locally designated name " << ClapTrap::_name << "!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_) {
	std::cout << "Welcome to Firestone, I am FR4G-TP, but you may call me by my locally designated name " << ClapTrap::_name << "!" << std::endl;
	srand((int) time(0));
	_setStats();
	return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src) {
	*this = src;
	srand((int) time(0));
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << ClapTrap::_name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	return;
}

void			FragTrap::_setStats() {
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


void			FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (ClapTrap::_energyPoints >= 25) {
		ClapTrap::_energyPoints -= 25;
		std::cout << "FR4G-TP " << ClapTrap::_name << ": vaulthunter_dot_exe: "  << _dot_exe_attacks[(rand() % 5)] << " (Energy " << ClapTrap::_energyPoints << ")" << std::endl;
		std::cout << "	attacks " << target << ", causing " << ClapTrap::_rangedAttackDamage << " points of damage!" << std::endl;
	} else {
		std::cout << "FR4G-TP " << ClapTrap::_name << ": vaulthunter_dot_exe: ARGH I'm OUT of ENERGY! (" << ClapTrap::_energyPoints << ")" << std::endl;
	}
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs) {
	ClapTrap::_name = rhs._name;
	ClapTrap::_hitPoints = rhs.ClapTrap::_hitPoints;
	ClapTrap::_maxHitPoints = rhs.ClapTrap::_maxHitPoints;
	ClapTrap::_energyPoints = rhs.ClapTrap::_energyPoints;
	ClapTrap::_maxEnergyPoints = rhs.ClapTrap::_maxEnergyPoints;
	ClapTrap::_level = rhs.ClapTrap::_level;
	ClapTrap::_meleeAttackDamage = rhs.ClapTrap::_meleeAttackDamage;
	ClapTrap::_rangedAttackDamage = rhs.ClapTrap::_rangedAttackDamage;
	ClapTrap::_armorDamageReduction = rhs.ClapTrap::_armorDamageReduction;
	std::cout << "Welcome to Firestone, I am a equals operator FR4G-TP, but you may call me by my locally designated name " << ClapTrap::_name << "!" << std::endl;
	return *this;
}
