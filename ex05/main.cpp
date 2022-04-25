/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:53:10 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/15 16:26:12 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main( void )
{
	Harl	karen;

	karen.complain( "" );
	karen.complain( "DEBUG" );
	karen.complain( "INFO" );
	karen.complain( "WARNING" );
	karen.complain( "ERROR" );
	return ( 0 );
}
