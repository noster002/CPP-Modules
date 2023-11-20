/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:04 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 12:36:20 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default constructor" << std::endl;
	return ;
}

Cat::Cat( Cat const & other ) : Animal()
{
	*this = other;
	std::cout << "Cat copy constructor" << std::endl;
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor" << std::endl;
	return ;
}

Cat&	Cat::operator=( Cat const & rhs )
{
	this->_type = rhs.getType();
	std::cout << "Cat assignment operator overload" << std::endl;
	return ( *this );
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
	return ;
}
