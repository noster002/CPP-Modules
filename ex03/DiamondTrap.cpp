/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 23:39:54 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 13:39:24 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap( "_clap_name", 100, 50, 30 ), \
									ScavTrap(), FragTrap(), _name( "" )
{
	std::cout << "DiamondTrap created." << std::cout;
	return ;
}

DiamondTrap::DiamondTrap( std::string const & name ) : ClapTrap( name + "_clap_name", 100, 50, 30 ), \
													ScavTrap(), FragTrap(), _name( name )
{
	std::cout << "DiamondTrap " << this->getName() << " is born.";
	std::cout << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const & other ) : ClapTrap( other.getName() + "_clap_name", \
																other.getHp(), \
																other.getEp(), \
																other.getAd() ), \
														ScavTrap(), FragTrap(), \
														_name( other.getName() )
{
	std::cout << "DiamondTrap " << this->getName() << " has been reproduced.";
	std::cout << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->getName() << " died.";
	std::cout << std::endl;
	return ;
}

DiamondTrap&		DiamondTrap::operator=( DiamondTrap const & rhs )
{
	this->_hp = rhs.getHp();
	this->_ep = rhs.getEp();
	this->_ad = rhs.getAd();
	return ( *this );
}

std::string const &	DiamondTrap::getName( void ) const
{
	return ( this->_name );
}

void				DiamondTrap::whoAmI( void ) const
{
	std::cout << "ClapTrap name: " << this->ClapTrap::getName() << std::endl;
	std::cout << "DiamondTrap name: " << this->getName() << std::endl;
	return ;
}
