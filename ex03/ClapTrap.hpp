/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:14:56 by averheij      ########   odam.nl         */
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
		void			_setStats();
		int				_hitPoints;
		int				_maxHitPoints;
		int				_energyPoints;
		int				_maxEnergyPoints;
		int				_level;
		std::string		_name;
		int				_meleeAttackDamage;
		int				_rangedAttackDamage;
		int				_armorDamageReduction;
};

#endif
