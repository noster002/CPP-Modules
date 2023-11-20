/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:26:37 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 14:00:22 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	a( "Charly" );
	ClapTrap	b( "Tobbi" );
	ScavTrap	c( "Robby" );

	std::cout << "HP:\t" << a.getHp() << std::endl;
	std::cout << "EP:\t" << a.getEp() << std::endl;
	std::cout << "AD:\t" << a.getAd() << std::endl;
	a.attack( "Robby" );
	c.takeDamage( a.getAd() );
	c.beRepaired( 10 );
	a.beRepaired( 5 );
	a.highFiveGuys();
	return ( 0 );
}
