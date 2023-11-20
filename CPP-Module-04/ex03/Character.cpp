/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:09:36 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 18:08:37 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	for ( int i = 0; i < MAX_DROPPED; ++i )
		this->_floor[i] = NULL;
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
		this->_slot[i] = NULL;
	return ;
}

Character::Character( std::string const & name ) : _name( name )
{
	for ( int i = 0; i < MAX_DROPPED; ++i )
		this->_floor[i] = NULL;
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
		this->_slot[i] = NULL;
	return ;
}

Character::Character( Character const & other ) : _name( other.getName() )
{
	for ( int i = 0; i < MAX_DROPPED; ++i )
		this->_floor[i] = other.getFloor( i );
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
		this->_slot[i] = other.getSlot( i );
	return ;
}

Character::~Character( void )
{
	for ( int i = 0; i < MAX_DROPPED; ++i )
	{
		delete this->_floor[i];
		this->_floor[i] = NULL;
	}
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
	{
		delete this->_slot[i];
		this->_slot[i] = NULL;
	}
	return ;
}

Character&			Character::operator=( Character const & rhs )
{
	for ( int i = 0; i < MAX_DROPPED; ++i )
		this->_floor[i] = rhs.getFloor( i )->clone();
	for ( int i = 0; i < NBR_OF_SLOTS; ++i )
		this->_slot[i] = rhs.getSlot( i )->clone();
	return ( *this );
}

std::string const &	Character::getName( void ) const
{
	return ( this->_name );
}

AMateria*			Character::getSlot( int idx ) const
{
	if ( idx >= NBR_OF_SLOTS || idx < 0 )
		return ( NULL );
	return ( this->_slot[idx] );
}

void				Character::_setSlot( int idx, AMateria* m )
{
	this->_slot[idx] = m;
	return ;
}

AMateria*			Character::getFloor( int idx ) const
{
	if ( idx >= MAX_DROPPED || idx < 0 )
		return ( NULL );
	return ( this->_floor[idx] );
}

void				Character::_setFloor( AMateria* m )
{
	int	idx = 0;

	while ( this->getFloor( idx ) != NULL && idx < MAX_DROPPED )
		idx++;
	if ( idx >= MAX_DROPPED )
	{
		delete m;
		m = NULL;
		return ;
	}
	this->_floor[idx] = m;
	return ;
}

void				Character::equip( AMateria* m )
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

void				Character::unequip( int idx )
{
	if ( idx >= NBR_OF_SLOTS || idx < 0 )
		return ;
	this->_setFloor( this->getSlot( idx ) );
	this->_setSlot( idx, NULL );
	return ;
}

void				Character::use( int idx, ICharacter& target )
{
	if ( idx >= NBR_OF_SLOTS || idx < 0 || this->getSlot( idx ) == NULL )
		return ;
	this->getSlot( idx )->use( target );
	return ;
}
