/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 16:02:14 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <stdlib.h>
# include <time.h>

class FragTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name_);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		void			rangedAttack(std::string const & target) const;
		void			meleeAttack(std::string const & target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);

		FragTrap &		operator=(FragTrap const & rhs);
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
		std::string		_dot_exe_attacks[5];
};

#endif
