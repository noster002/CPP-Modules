/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:01:35 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 18:09:14 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
		this->_slot[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( MateriaSource const & other )
{
	*this = other;
	return ;
}

MateriaSource::~MateriaSource( void )
{
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
	{
		delete this->_slot[i];
		this->_slot[i] = NULL;
	}
	return ;
}

MateriaSource&	MateriaSource::operator=( MateriaSource const & rhs )
{
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
		this->_slot[i] = rhs.getSlot( i )->clone();
	return ( *this );
}

AMateria*		MateriaSource::getSlot( int idx ) const
{
	if ( idx >= NBR_OF_SLOTS || idx < 0 )
		return ( NULL );
	return ( this->_slot[idx] );
}

void			MateriaSource::_setSlot( int idx, AMateria* m )
{
	if ( idx >= NBR_OF_SLOTS || idx < 0 )
		return ;
	this->_slot[idx] = m;
	return ;
}

void			MateriaSource::learnMateria( AMateria* m )
{
	if ( m == NULL )
		return ;
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
	{
		if ( this->getSlot( i ) == NULL )
		{
			this->_setSlot( i, m );
			return ;
		}
	}
	delete m;
	return ;
}

AMateria*		MateriaSource::createMateria( std::string const & type )
{
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
	{
		if ( this->getSlot( i ) == NULL )
			continue ;
		if ( this->getSlot( i )->getType() == type )
			return ( this->getSlot( i )->clone() );
	}
	return ( NULL );
}
