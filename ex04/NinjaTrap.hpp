/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:53:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name_);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		void			ninjaShoebox(ClapTrap & target);
		void			ninjaShoebox(FragTrap & target);
		void			ninjaShoebox(ScavTrap & target);
		void			ninjaShoebox(NinjaTrap & target);

		NinjaTrap &		operator=(NinjaTrap const & rhs);
	protected:
		int				_hitPoints = 60;
		int				_maxHitPoints = 60;
		int				_energyPoints = 120;
		int				_maxEnergyPoints = 120;
		int				_level = 1;
		int				_meleeAttackDamage = 60;
		int				_rangedAttackDamage = 5;
		int				_armorDamageReduction = 0;
	private:
		void			_setStats();
};

#endif
