/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:08:46 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/25 17:57:15 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) : _storedSize( 0 ), _storage()
{
	return ;
}

Span::Span( unsigned int size ) : _storedSize( size ), _storage( 0 )
{
	return ;
}

Span::Span( Span const & other ) : _storedSize( 0 ), _storage()
{
	*this = other;
	return ;
}

Span::~Span( void )
{
	return ;
}

Span&			Span::operator=( Span const & rhs )
{
	if ( this == &rhs )
		return ( *this );
	this->_storedSize = rhs._storedSize;
	this->_storage = rhs._storage;
	return ( *this );
}

unsigned int	Span::size( void ) const
{
	return ( this->_storage.size() );
}

unsigned int	Span::maxSize( void ) const
{
	return ( this->_storedSize );
}

void			Span::addNumber( int num )
{
	if ( this->size() >= this->maxSize() )
		throw std::out_of_range( "Trying to access Span instance: out of bounds" );
	this->_storage.push_back( num );
	return ;
}

unsigned int	Span::shortestSpan( void ) const
{
	if ( this->size() <= 1 )
		throw std::logic_error( "Span instance too short for comparison" );

	std::vector<int>			tmp = this->_storage;
	std::vector<int>::iterator	it;
	unsigned int				dif;

	std::sort( tmp.begin(), tmp.end() );
	dif = abs( *( tmp.begin() ) - *( tmp.begin() + 1 ) );
	if ( tmp.size() == 2 )
		return ( dif );
	for ( it = ( tmp.begin() + 1 ); it < tmp.end(); ++it )
	{
		if ( dif > abs( *( it ) - *( it + 1 ) ) )
			dif = abs( *( it ) - *( it + 1 ) );
	}
	return ( dif );
}

unsigned int	Span::longestSpan( void ) const
{
	if ( this->size() <= 1 )
		throw std::logic_error( "Span instance too short for comparison" );

	std::vector<int>	tmp = this->_storage;
	unsigned int		dif = \
		*( std::max_element( tmp.begin(), tmp.end() ) ) - \
		*( std::min_element( tmp.begin(), tmp.end() ) );
	return ( dif );
}
