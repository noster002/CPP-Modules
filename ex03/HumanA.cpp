/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:24:02 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 23:27:34 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& type ) : _name(name), _weapon(type)
{
	std::cout << this->_name << " is born" << std::endl;
	return;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name << " died" << std::endl;
	return;
}

void	HumanA::attack( void ) const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->_weapon.getType() << std::endl;
	return;
}
