/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:11:24 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 22:21:31 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return;
}

Weapon::~Weapon( void )
{
	return;
}

std::string const &	Weapon::getType( void ) const
{
	return ( this->_type );
}

void	Weapon::setType( std::string type )
{
	this->_type = type;
	return;
}
