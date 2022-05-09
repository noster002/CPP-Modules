/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:46:34 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 15:56:09 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
	return ;
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
	return ;
}

AMateria::AMateria( AMateria const & other )
{
	*this = other;
	return ;
}

AMateria::~AMateria( void )
{
	return ;
}

AMateria&			AMateria::operator=( AMateria const & rhs )
{
	rhs.getType();
	return ( *this );
}

std::string const &	AMateria::getType( void ) const
{
	return ( this->_type );
}
