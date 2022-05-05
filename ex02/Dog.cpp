/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:10:34 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:33:46 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal(), _brain( new Brain() )
{
	this->_type = "Dog";
	std::cout << "Dog default constructor" << std::endl;
	return ;
}

Dog::Dog( Dog const & other ) : AAnimal(), _brain( new Brain() )
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = other;
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor" << std::endl;
	delete _brain;
	return ;
}

Dog&	Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog assignment operator overload" << std::endl;
	this->_type = rhs.getType();
	*( this->_brain ) = *( rhs.getBrain() );
	return ( *this );
}

AAnimal&	Dog::operator=( AAnimal const & rhs )
{
	std::cout << "Doganimal assignment operator overload" << std::endl;
	this->_type = rhs.getType();
	*( this->_brain ) = *( rhs.getBrain() );
	return ( *this );
}

Brain*	Dog::getBrain( void ) const
{
	return ( this->_brain );
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
	return ;
}
