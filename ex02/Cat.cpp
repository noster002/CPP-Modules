/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:04 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:33:21 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : AAnimal(), _brain( new Brain() )
{
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
	return ;
}

Cat::Cat( Cat const & other ) : AAnimal(), _brain( new Brain() )
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor" << std::endl;
	delete _brain;
	return ;
}

Cat&	Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat assignment operator overload" << std::endl;
	this->_type = rhs.getType();
	*( this->_brain ) = *( rhs.getBrain() );
	return ( *this );
}

AAnimal&	Cat::operator=( AAnimal const & rhs )
{
	std::cout << "Catanimal assignment operator overload" << std::endl;
	this->_type = rhs.getType();
	*( this->_brain ) = *( rhs.getBrain() );
	return ( *this );
}

Brain*	Cat::getBrain( void ) const
{
	return ( this->_brain );
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
	return ;
}
