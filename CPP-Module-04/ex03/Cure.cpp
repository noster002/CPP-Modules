/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:51:59 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 15:55:21 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria( "cure" )
{
	return ;
}

Cure::Cure( Cure const & other ) : AMateria( "cure" )
{
	*this = other;
	return ;
}

Cure::~Cure( void )
{
	return ;
}

Cure&		Cure::operator=( Cure const & rhs )
{
	rhs.getType();
	return ( *this );
}

AMateria*	Cure::clone( void ) const
{
	return ( new Cure( *this ) );
}

void		Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "´s wounds *" << std::endl;
	return ;
}
