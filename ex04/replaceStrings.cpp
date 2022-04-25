/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceStrings.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:02:45 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/15 13:37:34 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static std::string	getInput( std::ifstream& ifs )
{
	std::string		input;
	std::string		buffer;

	while ( ifs.eof() == false )
	{
		std::getline( ifs, buffer );
		input += buffer;
		if ( ifs.eof() == false )
			input += "\n";
	}
	return ( input );
}

static void	getOutput( std::string& input, std::string& oldString, std::string& newString )
{
	std::size_t	lenOldString = oldString.length();
	std::size_t	lenNewString = newString.length();
	int			iterator = -1;

	while ( input[++iterator] )
	{
		if ( input[iterator] == oldString[0] )
		{
			if ( input.compare( iterator, lenOldString, oldString ) == 0 )
			{
				input.erase( iterator, lenOldString );
				input.insert( iterator, newString );
				iterator += lenNewString - 1;
			}
		}
	}
	return ;
}

void	replaceStrings( std::ifstream& ifs, std::ofstream& ofs, std::string& oldString, std::string& newString )
{
	std::string		input;

	input = getInput( ifs );
	getOutput( input, oldString, newString );
	ofs << input;
	return ;
}
