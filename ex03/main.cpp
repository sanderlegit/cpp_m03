/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:38:43 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 14:23:05 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		test_claptrap(void) {
	ClapTrap		clap1("Real Claptrap");
	ClapTrap		clap2 = clap1;
	ClapTrap		*clap3 = new ClapTrap(clap2);

	delete clap3;
	clap1.rangedAttack("a pineapple");
	clap1.rangedAttack("a pear");
	clap1.meleeAttack("harmless small animals");
	clap1.takeDamage(50);
	clap1.takeDamage(100);
	clap1.beRepaired(50);
	clap1.beRepaired(100);
	return (0);
}

int		test_fragtrap(void) {
	FragTrap		frag1("Fraggy");
	FragTrap		frag2 = frag1;
	FragTrap		*frag3 = new FragTrap(frag2);

	delete frag3;
	frag1.rangedAttack("a pineapple");
	frag1.rangedAttack("a pear");
	frag1.meleeAttack("harmless small animals");
	frag1.takeDamage(50);
	frag1.takeDamage(100);
	frag1.beRepaired(50);
	frag1.beRepaired(100);
	frag1.vaulthunter_dot_exe("Jack");
	frag1.vaulthunter_dot_exe("Maya");
	frag1.vaulthunter_dot_exe("himself");
	frag1.vaulthunter_dot_exe("his team");
	frag1.vaulthunter_dot_exe("fail");
	return (0);
}

int		test_scavtrap(void) {
	ScavTrap		scav1("Jeff");
	ScavTrap		scav2 = scav1;
	ScavTrap		*scav3 = new ScavTrap(scav2);

	delete scav3;
	scav1.rangedAttack("a pineapple");
	scav1.rangedAttack("a pear");
	scav1.meleeAttack("harmless small animals");
	scav1.takeDamage(50);
	scav1.takeDamage(100);
	scav1.beRepaired(50);
	scav1.beRepaired(100);
	scav1.challengeNewcomer("Jack");
	scav1.challengeNewcomer("Maya");
	scav1.challengeNewcomer("himself");
	scav1.challengeNewcomer("his team");
	return (0);
}

int		test_ninjatrap(void) {
	ScavTrap		scav1("Psycho");
	FragTrap		frag1("Biggie");
	ClapTrap		clap1("Basically Hitler");
	NinjaTrap		ninja1("Suku-san");
	NinjaTrap		ninja2 = ninja1;
	NinjaTrap		*ninja3 = new NinjaTrap(ninja2);

	delete ninja3;
	ninja1.rangedAttack("a pineapple");
	ninja1.rangedAttack("a pear");
	ninja1.meleeAttack("harmless small animals");
	ninja1.takeDamage(50);
	ninja1.takeDamage(100);
	ninja1.beRepaired(50);
	ninja1.beRepaired(100);
	ninja1.ninjaShoebox(scav1);
	ninja1.ninjaShoebox(frag1);
	ninja1.ninjaShoebox(clap1);
	ninja1.ninjaShoebox(ninja2);
	return (0);
}


int		main(void) {
	test_claptrap();
	std::cout << std::endl;
	test_fragtrap();
	std::cout << std::endl;
	test_scavtrap();
	std::cout << std::endl;
	test_ninjatrap();
	return (0);
}
