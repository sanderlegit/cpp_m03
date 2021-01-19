/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 13:59:20 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <stdlib.h>
# include <time.h>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name_);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		void			rangedAttack(std::string const & target) const;
		void			meleeAttack(std::string const & target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap &		operator=(ClapTrap const & rhs);
	protected:
		int				_hitPoints = 100;
		int				_maxHitPoints = 100;
		int				_energyPoints = 100;
		int				_maxEnergyPoints = 100;
		int				_level = 1;
		std::string		_name;
		int				_meleeAttackDamage = 30;
		int				_rangedAttackDamage = 20;
		int				_armorDamageReduction = 5;
};

#endif
