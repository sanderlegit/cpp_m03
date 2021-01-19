/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:10:26 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {
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
	private:
		void			_setStats();
};

#endif
