/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getFilestream.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:00:22 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/14 17:20:11 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	getFilestream( std::ifstream& ifs, std::ofstream& ofs, char* filename )
{
	std::string	fileIn = filename;
	std::string	fileOut = fileIn + ".replace";

	ifs.open( fileIn.c_str() );
	if ( ifs.is_open() )
	{
		ofs.open( fileOut.c_str() );
		if (ofs.is_open() )
			return ( true );
		ifs.close();
	}
	return ( false );
}
