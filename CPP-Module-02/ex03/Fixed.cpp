/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:26:04 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/27 11:57:12 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointNbr( 0 )
{
	return ;
}

Fixed::Fixed( int const number )
{
	this->_fixedPointNbr = number << this->_fractionalBitNbr;
	return ;
}

Fixed::Fixed( float const number )
{
	this->_fixedPointNbr = roundf( number * ( 1 << this->_fractionalBitNbr ) );
	return ;
}

Fixed::Fixed( Fixed const & other )
{
	*this = other;
	return ;
}

Fixed&	Fixed::operator=( Fixed const & other )
{
	this->_fixedPointNbr = other.getRawBits();
	return ( *this );
}

Fixed::~Fixed( void )
{
	return ;
}

int		Fixed::getRawBits( void ) const
{
	return ( this->_fixedPointNbr );
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointNbr = raw;
	return ;
}

int		Fixed::toInt( void ) const
{
	return ( this->_fixedPointNbr >> this->_fractionalBitNbr );
}

float	Fixed::toFloat( void ) const
{
	return ( ( ( float )this->_fixedPointNbr ) / ( 1 << this->_fractionalBitNbr ) );
}

bool	Fixed::operator>( Fixed const & other ) const
{
	return ( this->getRawBits() > other.getRawBits() );
}

bool	Fixed::operator<( Fixed const & other ) const
{
	return ( this->getRawBits() < other.getRawBits() );
}

bool	Fixed::operator>=( Fixed const & other ) const
{
	return ( this->getRawBits() >= other.getRawBits() );
}

bool	Fixed::operator<=( Fixed const & other ) const
{
	return ( this->getRawBits() <= other.getRawBits() );
}

bool	Fixed::operator==( Fixed const & other ) const
{
	return ( this->getRawBits() == other.getRawBits() );
}

bool	Fixed::operator!=( Fixed const & other ) const
{
	return ( this->getRawBits() != other.getRawBits() );
}

Fixed	Fixed::operator+( Fixed const & other ) const
{
	Fixed	result;

	result.setRawBits( this->getRawBits() + other.getRawBits() );
	return ( result );
}

Fixed	Fixed::operator-( Fixed const & other ) const
{
	Fixed	result;

	result.setRawBits( this->getRawBits() - other.getRawBits() );
	return ( result );
}

Fixed	Fixed::operator*( Fixed const & other ) const
{
	Fixed	result;

	result.setRawBits( this->getRawBits() * other.toFloat() );
	return ( result );
}

Fixed	Fixed::operator/( Fixed const & other ) const
{
	Fixed	result;

	result.setRawBits( this->getRawBits() / other.toFloat() );
	return ( result );
}

Fixed&	Fixed::operator++( void )
{
	++this->_fixedPointNbr;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp = *this;

	++this->_fixedPointNbr;
	return ( tmp );
}

Fixed&	Fixed::operator--( void )
{
	--this->_fixedPointNbr;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp = *this;

	--this->_fixedPointNbr;
	return ( tmp );
}

Fixed&	Fixed::min( Fixed& one, Fixed& two )
{
	if ( one < two )
		return ( one );
	return ( two );
}

Fixed const &	Fixed::min( Fixed const & one, Fixed const & two )
{
	if ( one < two )
		return ( one );
	return ( two );
}

Fixed&	Fixed::max( Fixed& one, Fixed& two )
{
	if ( one > two )
		return ( one );
	return ( two );
}

Fixed const &	Fixed::max( Fixed const & one, Fixed const & two )
{
	if ( one > two )
		return ( one );
	return ( two );
}

int const	Fixed::_fractionalBitNbr = 8;

std::ostream&	operator<<( std::ostream& out, Fixed const & f )
{
	out << f.toFloat();
	return ( out );
}
