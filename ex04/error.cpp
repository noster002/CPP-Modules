/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:14:14 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/14 15:17:03 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	errorArgument( void )
{
	std::cerr << "Wrong number of arguments" << std::endl;
	std::cerr << "Usage: ./sed <filename> <string_to_replace> <string_that_replaces>" << std::endl;
	return ( true );
}

bool	errorFilestream( void )
{
	std::cerr << "Error opening filestream" << std::endl;
	return ( true );
}
