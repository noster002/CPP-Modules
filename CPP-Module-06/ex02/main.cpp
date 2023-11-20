/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 17:50:31 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/20 18:28:07 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate( void )
{
	int	random = rand() % 3;

	if ( random == 0 )
		return ( new A() );
	else if ( random == 1 )
		return ( new B() );
	else if ( random == 2 )
		return ( new C() );
	return ( NULL );
}

void	identify( Base* p )
{
	A*	a = dynamic_cast<A*>( p );
	if ( a )
	{
		std::cout << "Identified type A" << std::endl;
		return ;
	}

	B*	b = dynamic_cast<B*>( p );
	if ( b )
	{
		std::cout << "Identified type B" << std::endl;
		return ;
	}

	C*	c = dynamic_cast<C*>( p );
	if ( c )
	{
		std::cout << "Identified type C" << std::endl;
		return ;
	}

	std::cout << "No type identified" << std::endl;
	return ;
}

void	identify( Base& p )
{
	try
	{
		A&	a = dynamic_cast<A&>( p );
		a.~A();
		std::cout << "Identified type A" << std::endl;
		return ;
	}
	catch ( std::exception& e )
	{
		e.what();
	}

	try
	{
		B&	b = dynamic_cast<B&>( p );
		b.~B();
		std::cout << "Identified type B" << std::endl;
		return ;
	}
	catch ( std::exception& e )
	{
		e.what();
	}

	try
	{
		C&	c = dynamic_cast<C&>( p );
		c.~C();
		std::cout << "Identified type C" << std::endl;
		return ;
	}
	catch ( std::exception& e )
	{
		e.what();
	}

	return ;
}

int	main( void )
{
	Base*	base = NULL;

	srand( time( NULL ) );

	std::cout << "by pointer:" << std::endl;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	base = generate();
	identify( base );
	delete base;
	base = NULL;

	std::cout << std::endl << "by reference:" << std::endl;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	base = generate();
	identify( *base );
	delete base;
	base = NULL;

	return ( 0 );
}
