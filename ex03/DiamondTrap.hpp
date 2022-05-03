/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:09:47 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 13:39:00 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap( std::string const & name );
		DiamondTrap( DiamondTrap const & other );
		~DiamondTrap( void );

		DiamondTrap&		operator=( DiamondTrap const & rhs );

		std::string const &	getName( void ) const;
		void				whoAmI( void ) const;

		using				ScavTrap::attack;

	private:

		std::string const	_name;

		DiamondTrap( void );

};

#endif
