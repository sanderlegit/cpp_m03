/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:38:43 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 12:32:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void) {
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
