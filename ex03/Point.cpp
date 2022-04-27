/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:52:29 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/27 17:04:29 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y( 0 )
{
	return ;
}

Point::Point( float const x, float const y ) : _x( x ), _y( y )
{
	return ;
}

Point::Point( Fixed const & x, Fixed const & y ) : _x( x ), _y( y )
{
	return ;
}

Point::Point( Point const & other ) : _x( other.getX() ), _y( other.getY() )
{
	return ;
}

Point const &	Point::operator=( Point const & other )
{
	if ( this == &other )
		return ( *this );
	this->~Point();
	new ( this ) Point( other );
	return ( *this );
}

Point::~Point( void )
{
	return ;
}

Fixed const &	Point::getX( void ) const
{
	return ( this->_x );
}

Fixed const &	Point::getY( void ) const
{
	return ( this->_y );
}
