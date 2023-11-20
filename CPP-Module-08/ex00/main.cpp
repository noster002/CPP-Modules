/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:17:07 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/25 13:49:14 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

template< typename T >
void	displayIterator( T const & content, T const & end )
{
	if ( content != end )
		std::cout << "Iterator: " << *content << std::endl;
	else
		std::cout << "Iterator reached end of container" << std::endl;
}

int	main( void )
{
	std::vector<int>			v;
	std::vector<int>::iterator	vit;

	v.push_back( 10 );
	v.push_back( -4 );
	v.push_back( 7 );
	vit = easyfind( v, 2 );
	displayIterator( vit, v.end() );
	vit = easyfind( v, -4 );
	displayIterator( vit, v.end() );

	std::list<int>				l;
	std::list<int>::iterator	lit;

	l.push_back( 2 );
	l.push_back( 6 );
	l.push_back( -3 );
	lit = easyfind( l, 2 );
	displayIterator( lit, l.end() );
	lit = easyfind( l, -4 );
	displayIterator( lit, l.end() );
	return ( 0 );
}
