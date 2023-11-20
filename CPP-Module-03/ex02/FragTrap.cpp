/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:28:02 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/02 13:54:09 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap( "", 100, 100, 30 )
{
	std::cout << "FragTrap created." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap( name, 100, 100, 30 )
{
	std::cout << "FragTrap " << this->getName() << " is born." << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const & other ) : ClapTrap( other.getName(), \
														other.getHp(), \
														other.getEp(), \
														other.getAd() )
{
	std::cout << "FragTrap " << this->getName() << " has been reproduced.";
	std::cout << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->getName() << " died." << std::endl;
	return ;
}

FragTrap&	FragTrap::operator=( FragTrap const & other )
{
	this->_hp = other.getHp();
	this->_ep = other.getEp();
	this->_ad = other.getAd();
	return ( *this );
}

void		FragTrap::highFiveGuys( void ) const
{
	std::cout << "FragTrap " << this->getName() << " requesting a high five.";
	std::cout << std::endl;
	return ;
}
