/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:10:30 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/04 15:10:43 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongDefault" )
{
	std::cout << "WrongAnimal default constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & other ) : _type( other.getType() )
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->_type = rhs.getType();
	std::cout << "WrongAnimal assignment operator overload" << std::endl;
	return ( *this );
}

std::string		WrongAnimal::getType( void ) const
{
	return ( this->_type );
}

void			WrongAnimal::makeSound( void ) const
{
	std::cout << "Default sound" << std::endl;
	return ;
}
