/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:38:57 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 14:00:14 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	a( "Amy" );
	ScavTrap	b( a );
	ScavTrap	c( "Charly" );

	std::cout << "HP:\t" << a.getHp() << std::endl;
	std::cout << "EP:\t" << a.getEp() << std::endl;
	std::cout << "AD:\t" << a.getAd() << std::endl;
	a.attack( "Charly" );
	c.takeDamage( a.getAd() );
	a.guardGate();
	b.beRepaired( 2 );
	return ( 0 );
}
