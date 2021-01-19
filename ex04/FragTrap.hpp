/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:52:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string name_);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		void			vaulthunter_dot_exe(std::string const & target);

		FragTrap &		operator=(FragTrap const & rhs);
	protected:
		int				_hitPoints = 100;
		int				_maxHitPoints = 100;
		int				_energyPoints = 100;
		int				_maxEnergyPoints = 100;
		int				_level = 1;
		int				_meleeAttackDamage = 30;
		int				_rangedAttackDamage = 20;
		int				_armorDamageReduction = 5;
	private:
		std::string		_dot_exe_attacks[5] =
							{"(Funzerker) I'm a sexy dinosaur! Rawr!",
							"(Meat Unicycle) (unintelligible snarling)",
							"(Gun Wizard) You can call me Gundalf!",
							"(Pirate Ship Mode) Avast ye scurvy dogs!",
							"(Laser Inferno) Boogie time!"};
};

#endif
