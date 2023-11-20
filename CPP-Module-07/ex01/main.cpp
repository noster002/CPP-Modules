/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:19:43 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/23 16:04:28 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "iter.hpp"

template< typename T >
void	templateOut( T& t )
{
	std::cout << "Template value: " << t << std::endl;
	return ;
}

template< typename T >
void	getSqrt( T& t )
{
	t = sqrt( t );
	return ;
}

template< typename T >
void	increment( T& t )
{
	++t;
	return ;
}

template< typename T >
void	decrement( T& t )
{
	--t;
	return ;
}

int	main( void )
{
	double	d[5] = { 1, 4, 9, 16, 25 };

	std::cout << "First test:" << std::endl;
	::iter( d, 5, &templateOut );
	::iter( d, 5, &getSqrt );
	std::cout << "Sqrt:" << std::endl;
	::iter( d, 5, &templateOut );

	int		i[3] = { 5, 4, 23 };

	std::cout << std::endl << "Second test:" << std::endl;
	::iter( i, 3, &templateOut );
	::iter( i, 3, &decrement );
	std::cout << "Decremented:" << std::endl;
	::iter( i, 3, &templateOut );

	char	c[7] = { 'd', '.', 'X', '3', '\"', '#', '_' };

	std::cout << std::endl << "Third test:" << std::endl;
	::iter( c, 7, &templateOut );
	::iter( c, 7, &increment );
	std::cout << "Incremented:" << std::endl;
	::iter( c, 7, &templateOut );

	return ( 0 );
}
