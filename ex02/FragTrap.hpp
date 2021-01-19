/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 14:57:10 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string name_);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		void			vaulthunter_dot_exe(std::string const & target);

		FragTrap &		operator=(FragTrap const & rhs);
	private:
		std::string		_dot_exe_attacks[5] =
							{"(Funzerker) I'm a sexy dinosaur! Rawr!",
							"(Meat Unicycle) (unintelligible snarling)",
							"(Gun Wizard) You can call me Gundalf!",
							"(Pirate Ship Mode) Avast ye scurvy dogs!",
							"(Laser Inferno) Boogie time!"};
};

#endif
