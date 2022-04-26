/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:44:46 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/26 16:30:28 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointNbr( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const number )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNbr = number << this->_fractionalBitNbr;
	return ;
}

Fixed::Fixed( float const number )
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointNbr = ( int )( number * ( 1 << this->_fractionalBitNbr ) );
	return ;
}

Fixed::Fixed( Fixed const & other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed&	Fixed::operator=( Fixed const & other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNbr = other.getRawBits();
	return ( *this );
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
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

int const	Fixed::_fractionalBitNbr = 8;

std::ostream&	operator<<( std::ostream& out, Fixed const & f )
{
	out << f.toFloat();
	return ( out );
}
