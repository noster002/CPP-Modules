/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:42:03 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 13:28:02 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	
	public:

		ScavTrap( void );
		ScavTrap( std::string const & name );
		ScavTrap( ScavTrap const & other );
		~ScavTrap( void );

		ScavTrap&	operator=( ScavTrap const & other );

		void		attack( std::string const & target );
		void		guardGate( void ) const;

};

#endif
