/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:20:35 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/20 15:49:52 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ConvertType.hpp"

int	main( int argc, char** argv )
{
	if ( argc != 2 )
	{
		std::cerr << "Type one argument to convert" << std::endl;
		return ( 1 );
	}
	ConvertType	a( argv[1] );

	a.printChar();
	a.printInt();
	a.printFloat();
	a.printDouble();
	return ( 0 );
}
