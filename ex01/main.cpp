/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:52:59 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/25 18:00:29 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main( void )
{
	{
		std::cout << "Provided test:" << std::endl;

		Span sp = Span( 5 );

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
	}
	return ( 0 );
}
