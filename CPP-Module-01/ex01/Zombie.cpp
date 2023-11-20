/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:20:15 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/11 20:21:48 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "Zombie created" << std::endl;
	return;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died" << std::endl;
	return;
}

void	Zombie::nameZombie( std::string name )
{
	this->_name = name;
	std::cout << "Zombie named " << this->_name << std::endl;
	return;
}

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
