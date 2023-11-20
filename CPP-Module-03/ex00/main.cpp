/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:58:06 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 14:00:02 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main( void )
{
	std::string const	r( "Robby" );
	std::string const	t( "Tobbi" );
	std::string const	c( "Charly" );
	std::string const	a( "Amy" );
	ClapTrap			R( r );
	ClapTrap			T( t );
	ClapTrap			C( c );
	ClapTrap			A( a );

	std::cout << "HP:\t" << R.getHp() << std::endl;
	std::cout << "EP:\t" << R.getEp() << std::endl;
	std::cout << "AD:\t" << R.getAd() << std::endl;
	R.beRepaired( 0 );
	A.attack( t );
	T.takeDamage( A.getAd() );
	C.beRepaired( 5 );
	T.attack( r );
	C.attack( r );
	R.takeDamage( T.getAd() + C.getAd() );
	R.beRepaired( 0 );
	R.beRepaired( 1 );
	R.beRepaired( 3 );
	R.beRepaired( 2 );
	R.attack( a );
	A.takeDamage( R.getAd() );
	R.attack( t );
	T.takeDamage( R.getAd() );
	R.attack( c );
	C.takeDamage( R.getAd() );
	R.beRepaired( 1 );
	R.beRepaired( 5 );
	std::cout << "Robby HP: " << R.getHp() << std::endl;
	std::cout << "Tobbi HP: " << T.getHp() << std::endl;
	T = R;
	std::cout << "Tobbi HP: " << T.getHp() << std::endl;
	R.beRepaired( 2 );
	return ( 0 );
}
