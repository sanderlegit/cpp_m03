/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:38:43 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 13:34:30 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		test_fragtrap(void) {
	FragTrap		frag1("Claptrap");
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

int		main(void) {
	test_fragtrap();
	test_scavtrap();
	return (0);
}
