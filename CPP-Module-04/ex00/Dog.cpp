/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:10:34 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/04 14:17:23 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
	return ;
}

Dog::Dog( Dog const & other ) : Animal()
{
	*this = other;
	std::cout << "Dog copy constructor" << std::endl;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor" << std::endl;
	return ;
}

Dog&	Dog::operator=( Dog const & rhs )
{
	this->_type = rhs.getType();
	std::cout << "Dog assignment operator overload" << std::endl;
	return ( *this );
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
	return ;
}
