/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:53:10 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/22 16:55:47 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main( int argc, char** argv )
{
	Harl		karen;
	std::string	arg;

	if ( argc != 2 )
	{
		std::cerr << "Usage: ./harlFilter <complaint>" << std::endl;
		return ( 1 );
	}
	arg = argv[1];
	karen.complain( arg );
	return ( 0 );
}
