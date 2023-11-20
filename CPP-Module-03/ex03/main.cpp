/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:08:10 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 14:03:23 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	a( "Amy" );

	std::cout << "HP:\t" << a.getHp() << std::endl;
	std::cout << "EP:\t" << a.getEp() << std::endl;
	std::cout << "AD:\t" << a.getAd() << std::endl;
	a.attack( "Tobbi" );
	a.takeDamage( 100 );
	a.attack( "Tobbi" );
	a.highFiveGuys();
	a.guardGate();
	a.whoAmI();
	return ( 0 );
}
