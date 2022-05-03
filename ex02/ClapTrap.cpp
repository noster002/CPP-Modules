/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:58:32 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/02 14:09:45 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "" ), _hp( 10 ), _ep( 10 ), _ad( 0 )
{
	std::cout << "ClapTrap created." << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name ) : _name( name ), _hp( 10 ), \
												_ep( 10 ), _ad( 0 )
{
	std::cout << "ClapTrap " << this->getName() << " is born." << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name, unsigned int const hp, \
					unsigned int const ep, unsigned int const ad ) : \
					_name( name ), _hp( hp ), _ep( ep ), _ad( ad )
{
	std::cout << "ClapTrap " << this->getName() << " is born." << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & other ) : _name( other.getName() ), \
												_hp( other.getHp() ), \
												_ep( other.getEp() ), \
												_ad( other.getAd() )
{
	std::cout << "ClapTrap " << this->getName() << " has been reproduced.";
	std::cout << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap " << this->getName() << " died." << std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=( ClapTrap const & other )
{
	this->_hp = other.getHp();
	this->_ep = other.getEp();
	this->_ad = other.getAd();
	return ( *this );
}

std::string const &	ClapTrap::getName( void ) const
{
	return ( this->_name );
}

unsigned int		ClapTrap::getHp( void ) const
{
	return ( this->_hp );
}

void				ClapTrap::setHp( unsigned int const amount )
{
	this->_hp = amount;
	return ;
}

unsigned int		ClapTrap::getEp( void ) const
{
	return ( this->_ep );
}

void				ClapTrap::decrementEp( void )
{
	if ( !( this->_isOutOfEnergy() ) )
		--this->_ep;
	return ;
}

unsigned int		ClapTrap::getAd( void ) const
{
	return ( this->_ad );
}

void				ClapTrap::attack( std::string const & target )
{
	if ( !( this->isOperational() ) )
		return ;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target \
			<< ", causing " << this->getAd() << " points of damage!" << std::endl;
	this->decrementEp();
	return ;
}

void				ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " takes ";
	if ( this->getHp() <= amount )
	{
		std::cout << this->getHp();
		this->setHp( 0 );
	}
	else
	{
		this->setHp( this->getHp() - amount );
		std::cout << amount;
	}
	std::cout << " points of damage!" << std::endl;
	return ;
}

void				ClapTrap::beRepaired( unsigned int amount )
{
	if ( !( this->isOperational() ) )
		return ;
	std::cout << "ClapTrap " << this->getName() << " repaired " \
			<< amount << " hit points!" << std::endl;
	this->setHp( this->getHp() + amount );
	this->decrementEp();
	return ;
}

bool				ClapTrap::isOperational( void ) const
{
	bool	ret;

	ret = true;
	if ( this->_isOutOfEnergy() )
	{
		ret = false;
		std::cout << "ClapTrap " << this->getName() << " is out of energy. ";
		std::cout << std::endl;
	}
	if ( this->_isBroken() )
	{
		ret = false;
		std::cout << "ClapTrap " << this->getName() << " is broken. ";
		std::cout << std::endl;
	}
	return ( ret );
}

bool				ClapTrap::_isOutOfEnergy( void ) const
{
	return ( this->getEp() == 0 );
}

bool				ClapTrap::_isBroken( void ) const
{
	return ( this->getHp() == 0 );
}
