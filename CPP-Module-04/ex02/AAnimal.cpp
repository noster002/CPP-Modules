/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:48:56 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:45:56 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "Default" )
{
	std::cout << "AAnimal default constructor" << std::endl;
	return ;
}

AAnimal::AAnimal( AAnimal const & other ) : _type( other.getType() )
{
	std::cout << "AAnimal copy constructor" << std::endl;
	return ;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor" << std::endl;
	return ;
}

AAnimal&		AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal assignment operator overload" << std::endl;
	this->_type = rhs.getType();
	return ( *this );
}

std::string	AAnimal::getType( void ) const
{
	return ( this->_type );
}
