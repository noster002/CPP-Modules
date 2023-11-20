/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:17:15 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/11 22:46:06 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main( void )
{
	int		N = 5;
	Zombie*	undead = zombieHorde(N, "Olaf");
	int		count = -1;

	while ( ++count < N )
	{
		std::cout << "Zombie " << count + 1 << ": " << std::endl;
		undead[count].announce();
	}
	delete [] undead;
	return ( 0 );
}
