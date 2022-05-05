/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:48:56 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 12:32:19 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Default" )
{
	std::cout << "Animal default constructor" << std::endl;
	return ;
}

Animal::Animal( Animal const & other ) : _type( other.getType() )
{
	std::cout << "Animal copy constructor" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor" << std::endl;
	return ;
}

Animal&		Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal assignment operator overload" << std::endl;
	this->_type = rhs.getType();
	return ( *this );
}

std::string	Animal::getType( void ) const
{
	return ( this->_type );
}

Brain*		Animal::getBrain( void ) const
{
	return ( NULL );
}

void		Animal::makeSound( void ) const
{
	std::cout << "Default sound" << std::endl;
	return ;
}
