/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:24:02 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/11 22:48:57 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	if ( N < 0 )
		N = 0;
	Zombie*	undead = new Zombie[N];
	int		count = -1;

	while ( ++count < N )
		undead[count].nameZombie( name );
	return ( undead );
}
