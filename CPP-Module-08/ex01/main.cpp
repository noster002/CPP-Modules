/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:52:59 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/29 21:07:39 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main( void )
{
	{
		std::cout << "Provided test:" << std::endl;

		Span	sp = Span( 5 );

		sp.addNumber( 6 );
		sp.addNumber( 3 );
		sp.addNumber( 17 );
		sp.addNumber( 9 );
		sp.addNumber( 11 );
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl << "My test:" << std::endl;

		Span	sp( 12 );
		try
		{
			std::cout << sp << std::endl;
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber( 3 );
		sp.addNumber( 2 );
		sp.addNumber( 7 );
		sp.addNumber( 13 );
		std::cout << sp << std::endl;

		std::vector<int>	v;

		v.push_back( -2 );
		v.push_back( 18 );
		v.push_back( 2 );
		sp.appendIteratorRange( v.begin(), v.end() );
		std::cout << sp << std::endl;

		sp.randomFill();
		std::cout << sp << std::endl;

		try
		{
			sp.addNumber( 3 );
			std::cout << sp << std::endl;
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			sp.appendIteratorRange( v.begin(), v.end() );
			std::cout << sp << std::endl;
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}

		Span	span( 1000000 );

		span.randomFill();
		std::cout << span << std::endl;
	}
	return ( 0 );
}
