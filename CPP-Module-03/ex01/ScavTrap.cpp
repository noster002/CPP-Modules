/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 16:41:49 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/02 13:11:23 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap( "", 100, 50, 20 )
{
	std::cout << "ScavTrap created" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap( name, 100, 50, 20 )
{
	std::cout << "ScavTrap " << this->getName() << " is born." << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & other ) : ClapTrap( other.getName(), \
														other.getHp(), \
														other.getEp(), \
														other.getAd() )
{
	std::cout << "ScavTrap " << this->getName() << " has been reproduced.";
	std::cout << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->getName() << " died." << std::endl;
	return ;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const & other )
{
	this->_hp = other.getHp();
	this->_ep = other.getEp();
	this->_ad = other.getAd();
	return ( *this );
}

void		ScavTrap::attack( std::string const & target )
{
	if ( !( this->isOperational() ) )
		return ;
	std::cout << "ScavTrap " << this->getName() << " attacks " << target \
			<< ", causing " << this->getAd() << " points of damage!" << std::endl;
	this->decrementEp();
	return ;
}

void		ScavTrap::guardGate( void ) const
{
	std::cout << "ScavTrap " << this->getName() << " enters gate keeper mode.";
	std::cout << std::endl;
	return ;
}
