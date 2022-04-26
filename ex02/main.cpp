/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:19:14 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/26 23:54:59 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	std::cout << "Comparison operators:" << std::endl;
	{
		Fixed		a( 5 );
		Fixed const	b( a );
		a = Fixed( 4 );

		std::cout << "a:\t" << a << std::endl << "b:\t" << b << std::endl;
		if ( a > b )
			std::cout << "a > b" << std::endl;
		else if ( a < b )
			std::cout << "a < b" << std::endl;
		if ( a >= b )
			std::cout << "a >= b" << std::endl;
		else if ( a <= b )
			std::cout << "a <= b" << std::endl;
		if ( a == b )
			std::cout << "a == b" << std::endl;
		else if ( a != b )
			std::cout << "a != b" << std::endl;
	}
	std::cout << std::endl << "Arithmetic operators:" << std::endl;
	{
		Fixed		a( 2 );
		Fixed const	b( 4 );

		std::cout << "a:\t" << a << std::endl << "b:\t" << b << std::endl;
		std::cout << "a + b = " << ( a + b ) << std::endl;
		std::cout << "a - b = " << ( a - b ) << std::endl;
		std::cout << "a * b = " << ( a * b ) << std::endl;
		std::cout << "a / b = " << ( a / b ) << std::endl;
	}
	std::cout << std::endl << "Subject provided test:" << std::endl;
	{
		Fixed		a;
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl << "Static min & max functions:" << std::endl;
	{
		Fixed		a( 5.02f );
		Fixed		b( 3 );
		Fixed const	c( 2.3f );
		Fixed const	d( 6 );
		Fixed		e;
		Fixed const	f = Fixed::max( a, c );

		std::cout << "Min: a | b\t" << Fixed::min( a, b ) << std::endl;
		std::cout << "Min: c | d\t" << Fixed::min( c, d ) << std::endl;
		std::cout << "Max: a | b\t" << Fixed::max( a, b ) << std::endl;
		std::cout << "Max: c | d\t" << Fixed::max( c, d ) << std::endl;
		std::cout << "Min: a | d\t" << Fixed::min( a, d ) << std::endl;
		std::cout << "Max: c | b\t" << Fixed::max( c, b ) << std::endl;

		e = Fixed::min( d, b );

		std::cout << "e = " << e << std::endl;
		std::cout << "f = " << f << std::endl;
	}
	return ( 0 );
}
