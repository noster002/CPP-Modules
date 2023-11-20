/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:57:39 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 15:55:34 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria( "ice" )
{
	return ;
}

Ice::Ice( Ice const & other ) : AMateria( "ice" )
{
	*this = other;
	return ;
}

Ice::~Ice( void )
{
	return ;
}

Ice&		Ice::operator=( Ice const & rhs )
{
	rhs.getType();
	return ( *this );
}

AMateria*	Ice::clone( void ) const
{
	return ( new Ice( *this ) );
}

void		Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
