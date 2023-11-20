/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:41:56 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 23:30:27 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	std::cout << this->_name << " is born" << std::endl;
	return;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name << " died" << std::endl;
	return;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
	return;
}

void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon->getType() << std::endl;
	return;
}
