/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:10 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:56:32 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	ClapTrap::_name = "Nameless";
	std::cout << "Welcome to Firestone, I am FR4G-TP, but you may call me by my locally designated name " << ClapTrap::_name << "!" << std::endl;
	srand((int) time(0));
	return;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_) {
	std::cout << "Welcome to Firestone, I am FR4G-TP, but you may call me by my locally designated name " << ClapTrap::_name << "!" << std::endl;
	srand((int) time(0));
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
