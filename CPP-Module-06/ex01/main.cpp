/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:25:49 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/20 16:43:02 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "struct.hpp"

uintptr_t	serialize( Data* ptr )
{
	return ( reinterpret_cast<uintptr_t>( ptr ) );
}

Data*	deserialize( uintptr_t raw )
{
	return ( reinterpret_cast<Data *>( raw ) );
}

int	main( void )
{
	Data		x;
	uintptr_t	saveX;
	Data*		newX;

	x.data = "42";
	std::cout << "x data string:\t\t" << x.data << std::endl;
	std::cout << "x data address:\t\t" << &x << std::endl;
	saveX = serialize( &x );
	newX = deserialize( saveX );
	std::cout << "newX data string:\t" << newX->data << std::endl;
	std::cout << "newX data address:\t" << newX << std::endl;
	return ( 0 );
}
