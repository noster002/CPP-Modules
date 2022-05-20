/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 09:35:44 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/20 15:41:48 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <cstdlib>
#include <iomanip>
#include "ConvertType.hpp"

ConvertType::ConvertType( void ) : \
	_src( "" ), _c( '\0' ), _i( 0 ), _f( 0.0 ), _d( 0.0 ), _convertibleMask( 0 )
{
	return ;
}

ConvertType::ConvertType( std::string const & src ) : \
	_src( src ), _c( '\0' ), _i( 0 ), _f( 0.0 ), _d( 0.0 ), _convertibleMask( 0 )
{
	if ( this->_isInt() )
		this->_convertFromInt();
	else if ( this->_isChar() )
		this->_convertFromChar();
	else if ( this->_isDouble() )
		this->_convertFromDouble();
	else if ( this->_isFloat() )
		this->_convertFromFloat();
	else
	{
		std::cerr << "Not a valid type conversion" << std::endl;
		this->_convertibleMask = \
			ConvertType::_charConvertible + ConvertType::_intConvertible + \
			ConvertType::_floatConvertible + ConvertType::_doubleConvertible;
	}
	return ;
}

ConvertType::ConvertType( ConvertType const & other ) : \
	_src( other.getSrc() ), _c( other.getChar() ), _i( other.getInt() ), \
	_f( other.getFloat() ), _d( other.getDouble() ), \
	_convertibleMask( other.getConvertibleMask() )
{
	return ;
}

ConvertType::~ConvertType( void )
{
	return ;
}

ConvertType&		ConvertType::operator=( ConvertType const & rhs )
{
	this->~ConvertType();
	new ( this ) ConvertType( rhs );
	return ( *this );
}

std::string const &	ConvertType::getSrc( void ) const
{
	return ( this->_src );
}

char				ConvertType::getChar( void ) const
{
	return ( this->_c );
}

int					ConvertType::getInt( void ) const
{
	return ( this->_i );
}

float				ConvertType::getFloat( void ) const
{
	return ( this->_f );
}

double				ConvertType::getDouble( void ) const
{
	return ( this->_d );
}

int					ConvertType::getConvertibleMask( void ) const
{
	return ( this->_convertibleMask );
}

void				ConvertType::printChar( void ) const
{
	std::cout << "Char: ";
	if ( ( this->getConvertibleMask() / ConvertType::_charConvertible ) % 2 )
		std::cout << "impossible" << std::endl;
	else if ( isprint( this->getChar() ) )
		std::cout << "\'" << this->getChar() << "\'" << std::endl;
	else
		std::cout << "non displayable" << std::endl;
	return ;
}

void				ConvertType::printInt( void ) const
{
	std::cout << "Int: ";
	if ( ( this->getConvertibleMask() / ConvertType::_intConvertible ) % 2 )
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->getInt() << std::endl;
	return ;
}

void				ConvertType::printFloat( void ) const
{
	std::cout << "Float: ";
	if ( ( this->getConvertibleMask() / ConvertType::_floatConvertible ) % 2 )
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::setprecision( std::numeric_limits<float>::digits10 + 2 ) \
			<< this->getFloat();
		if ( this->getFloat() - this->getInt() == 0.0 )
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	return ;
}

void				ConvertType::printDouble( void ) const
{
	std::cout << "Double: ";
	if ( ( this->getConvertibleMask() / ConvertType::_doubleConvertible ) % 2 )
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::setprecision( std::numeric_limits<double>::digits10 + 2 ) \
			<< this->getDouble();
		if ( this->getDouble() - this->getInt() == 0.0 )
			std::cout << ".0";
		std::cout << std::endl;
	}
	return ;
}

ConvertType::operator char()
{
	return ( this->getChar() );
}

ConvertType::operator int()
{
	return ( this->getInt() );
}

ConvertType::operator float()
{
	return ( this->getFloat() );
}

ConvertType::operator double()
{
	return ( this->getDouble() );
}

bool				ConvertType::_isChar( void ) const
{
	return ( this->_src[1] == '\0' );
}

bool				ConvertType::_isInt( void ) const
{
	int	i = 0;

	if ( this->_src[i] == '+' || this->_src[i] == '-' )
		++i;
	while ( this->_src[i] != '\0' )
	{
		if ( !( isdigit( this->_src[i] ) ) )
			return ( false );
		++i;
	}
	return ( true );
}

bool				ConvertType::_isFloat( void ) const
{
	int	i = 0;

	if ( this->_src == "inff" || this->_src == "+inff" || \
		this->_src == "-inff" || this->_src == "nanf" )
		return ( true );
	if ( this->_src[0] == '+' || this->_src[0] == '-' )
		++i;
	while ( isdigit( this->_src[i] ) )
		++i;
	if ( this->_src[i] != '.' )
		return ( false );
	++i;
	while ( isdigit( this->_src[i] ) )
		++i;
	if ( this->_src[i] == 'f' && this->_src[i + 1] == '\0' )
		return ( true );
	return ( false );
}

bool				ConvertType::_isDouble( void ) const
{
	int	i = 0;

	if ( this->_src == "inf" || this->_src == "+inf" || \
		this->_src == "-inf" || this->_src == "nan" )
		return ( true );
	if ( this->_src[0] == '+' || this->_src[0] == '-' )
		++i;
	while ( isdigit( this->_src[i] ) )
		++i;
	if ( this->_src[i] != '.' || this->_src[i + 1] == '\0' )
		return ( false );
	++i;
	while ( isdigit( this->_src[i] ) )
		++i;
	if ( this->_src[i] == '\0' )
		return ( true );
	return ( false );
}

void				ConvertType::_convertFromChar( void )
{
	this->_c = this->_src[0];
	this->_i = static_cast<int>( this->_c );
	this->_f = static_cast<float>( this->_c );
	this->_d = static_cast<double>( this->_c );
	return ;
}

void				ConvertType::_convertFromInt( void )
{
	this->_i = atoi( this->_src.c_str() );
	if ( this->_i > 127 || this->_i < 0 )
		this->_convertibleMask += ConvertType::_charConvertible;
	else
		this->_c = static_cast<char>( this->_i );
	this->_f = static_cast<float>( this->_i );
	this->_d = static_cast<double>( this->_i );
	return ;
}

void				ConvertType::_convertFromFloat( void )
{
	this->_f = atof( this->_src.c_str() );
	if ( this->_f == std::numeric_limits<float>::infinity() || \
		this->_f == -std::numeric_limits<float>::infinity() || \
		this->_f != this->_f )
		this->_convertibleMask += ConvertType::_charConvertible;
	else if ( this->_f > 127 || this->_f < 0 )
		this->_convertibleMask += ConvertType::_charConvertible;
	else
		this->_c = static_cast<char>( this->_f );
	if ( this->_f == std::numeric_limits<float>::infinity() || \
		this->_f == -std::numeric_limits<float>::infinity() || \
		this->_f != this->_f )
		this->_convertibleMask += ConvertType::_intConvertible;
	else if ( this->_f > std::numeric_limits<int>::max() || \
		this->_f < std::numeric_limits<int>::min() )
		this->_convertibleMask += ConvertType::_intConvertible;
	else
		this->_i = static_cast<int>( this->_f );
	this->_d = static_cast<double>( this->_f );
	return ;
}

void				ConvertType::_convertFromDouble( void )
{
	this->_d = atof( this->_src.c_str() );
	if ( this->_d == std::numeric_limits<double>::infinity() || \
		this->_d == -std::numeric_limits<double>::infinity() || \
		this->_d != this->_d )
		this->_convertibleMask += ConvertType::_charConvertible;
	else if ( this->_d > 127 || this->_d < 0 )
		this->_convertibleMask += ConvertType::_charConvertible;
	else
		this->_c = static_cast<char>( this->_d );
	if ( this->_d == std::numeric_limits<double>::infinity() || \
		this->_d == -std::numeric_limits<double>::infinity() || \
		this->_d != this->_d )
		this->_convertibleMask += ConvertType::_intConvertible;
	else if ( this->_d > std::numeric_limits<int>::max() || \
		this->_d < std::numeric_limits<int>::min() )
		this->_convertibleMask += ConvertType::_intConvertible;
	else
		this->_i = static_cast<int>( this->_d );
	if ( ( this->_d != std::numeric_limits<double>::infinity() && \
		this->_d != -std::numeric_limits<double>::infinity() && \
		this->_d == this->_d ) && \
		( this->_d > std::numeric_limits<float>::max() || \
		this->_d < -std::numeric_limits<float>::max() ) )
		this->_convertibleMask += ConvertType::_floatConvertible;
	else
		this->_f = static_cast<float>( this->_d );
	return ;
}
