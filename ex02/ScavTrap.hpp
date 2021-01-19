/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 14:02:13 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name_);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		//void			rangedAttack(std::string const & target) const;
		//void			meleeAttack(std::string const & target) const;
		//void			takeDamage(unsigned int amount);
		//void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);

		ScavTrap &		operator=(ScavTrap const & rhs);
	private:
		//int				_hitPoints = 100;
		//int				_maxHitPoints = 100;
		int				_energyPoints = 50;
		int				_maxEnergyPoints = 50;
		//int				_level = 1;
		std::string		_name;
		int				_meleeAttackDamage = 20;
		int				_rangedAttackDamage = 15;
		int				_armorDamageReduction = 3;
		std::string		_challenges[5] =
							{"balance a grenade on your head for a minute!",
							"throw me all your rarest guns. ;)",
							"fight the Psycho Midget King!",
							"duel one of your teammates!",
							"take on the Vault Guardian. (good luck)"};
};

#endif
