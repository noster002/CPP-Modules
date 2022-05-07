/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:09:36 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 15:46:51 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	return ;
}

Character::Character( std::string const & name ) : _name( name )
{
	return ;
}

Character::Character( Character const & other ) : _name( other.getName() )
{
	*this = other;
	return ;
}

Character::~Character( void )
{
	return ;
}

Character&	Character::operator=( Character const & rhs )
{

}
