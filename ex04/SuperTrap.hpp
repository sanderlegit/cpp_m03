/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 11:03:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/19 15:39:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(void);
		SuperTrap(std::string name_);
		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);

		SuperTrap &		operator=(SuperTrap const & rhs);
	private:
		void			_setStats();
};

#endif
