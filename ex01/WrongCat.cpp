/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:15:16 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 12:36:05 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor" << std::endl;
	return ;
}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal()
{
	*this = other;
	std::cout << "WrongCat copy constructor" << std::endl;
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=( WrongCat const & rhs )
{
	this->_type = rhs.getType();
	std::cout << "WrongCat assignment operator overload" << std::endl;
	return ( *this );
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongMeow" << std::endl;
	return ;
}
