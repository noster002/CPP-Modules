/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:08:24 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/11 20:26:03 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name );

void	randomChump( std::string name );

int	main( void )
{
	Zombie*	undead = newZombie( "Sabrina" );

	undead->announce();
	randomChump( "Dave" );
	delete undead;
	return ( 0 );
}
