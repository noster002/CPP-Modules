/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:07:31 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/15 13:06:00 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main( int argc, char** argv )
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		oldString;
	std::string		newString;

	if ( argc != 4 )
		return ( errorArgument() );
	if ( getFilestream( ifs, ofs, argv[1] ) == false )
		return ( errorFilestream() );
	oldString = argv[2];
	newString = argv[3];
	replaceStrings( ifs, ofs, oldString, newString );
	ifs.close();
	ofs.close();
	return ( 0 );
}
