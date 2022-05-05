/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:58:00 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:14:33 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor" << std::endl;
	return ;
}

Brain::Brain( Brain const & other )
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = other;
	return ;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor" << std::endl;
	return ;
}

Brain&				Brain::operator=( Brain const & rhs )
{
	for ( int i = 0; i < 100; i++ )
		this->_idea[i] = rhs.getIdea( i );
	std::cout << "Brain assignment operator called" << std::endl;
	return ( *this );
}

std::string const	Brain::getIdea( unsigned int index ) const
{
	if ( index >= 100 )
		return ( NULL );
	return ( this->_idea[index] );
}

void				Brain::setIdea( std::string const & idea, unsigned int index )
{
	if ( index >= 100 )
		return ;
	this->_idea[index] = idea;
	return ;
}
