/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 17:02:33 by averheij      ########   odam.nl         */
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
		virtual ~FragTrap(void);

		void			vaulthunter_dot_exe(std::string const & target);

		FragTrap &		operator=(FragTrap const & rhs);
	protected:
		void			_setStats();
		std::string		_dot_exe_attacks[5];
};

#endif
