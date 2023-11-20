/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:53:56 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/22 17:04:11 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void )
{
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::complain( std::string level )
{
	std::string	complaint[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int			complaintLevel;
	int			i = -1;

	while ( ++i < 4 )
	{
		if ( level == complaint[i] )
			complaintLevel = i;
	}
	switch ( complaintLevel )
	{
		case 0:
			this->_debug();
			/* FALLTHRU */
		case 1:
			this->_info();
			/* FALLTHRU */
		case 2:
			this->_warning();
			/* FALLTHRU */
		case 3:
			this->_error();
			break ;
		default:
			this->_default();
			break ;
	}
	return ;
}

void	Harl::_debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::_info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::_warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::_error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::_default( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}
