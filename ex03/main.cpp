/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:02:48 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/27 17:36:39 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point );

int	main( void )
{
	Point	p( -2, 1 );
	Point	q( 1, -2 );
	Point	r( 2, 2 );
	Point	s( 1.1, -1 );

	std::cout << "p.x:\t" << p.getX() << "\t\t" << "p.y:\t" << p.getY() << std::endl;
	std::cout << "q.x:\t" << q.getX() << "\t\t" << "q.y:\t" << q.getY() << std::endl;
	std::cout << "r.x:\t" << r.getX() << "\t\t" << "r.y:\t" << r.getY() << std::endl;
	std::cout << "s.x:\t" << s.getX() << "\t\t" << "s.y:\t" << s.getY() << std::endl;

	std::cout << "Coordinate System" << std::endl;
	std::cout << "                y               " << std::endl;
	std::cout << "                |2      *       " << std::endl;
	std::cout << "                |               " << std::endl;
	std::cout << "        *       |1              " << std::endl;
	std::cout << "--------2---1---|---1---2------x" << std::endl;
	std::cout << "                |1              " << std::endl;
	std::cout << "                |               " << std::endl;
	std::cout << "                |2  *           " << std::endl;
	std::cout << "                |               " << std::endl;

	if ( bsp( p, q, r, s ) )
		std::cout << "Point s lies inside the triangle pqr" << std::endl;
	else
		std::cout << "Point s lies outside the triangle pqr" << std::endl;
}
