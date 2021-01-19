/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 14:52:31 by averheij      ########   odam.nl         */
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

		void			challengeNewcomer(std::string const & target);

		ScavTrap &		operator=(ScavTrap const & rhs);
	private:
		void			_setStats();
		std::string		_challenges[5] =
							{"balance a grenade on your head for a minute!",
							"throw me all your rarest guns. ;)",
							"fight the Psycho Midget King!",
							"duel one of your teammates!",
							"take on the Vault Guardian. (good luck)"};
};

#endif
