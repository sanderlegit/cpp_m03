/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:07:54 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <stdlib.h>
# include <time.h>

class ScavTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name_);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		void			rangedAttack(std::string const & target) const;
		void			meleeAttack(std::string const & target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);

		ScavTrap &		operator=(ScavTrap const & rhs);
	private:
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
		std::string		_challenges[5];
};

#endif
