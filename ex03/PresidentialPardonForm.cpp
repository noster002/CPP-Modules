/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:46:17 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 14:35:32 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : \
	Form( "PresidentialPardonForm", 25, 5 ), _target( "" )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) : \
	Form( "PresidentialPardonForm", 25, 5 ), _target( target )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & other ) : \
	Form( "PresidentialPardonForm", 25, 5 ), _target( other.getTarget() )
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	rhs.getTarget();
	return ( *this );
}

std::string const &		PresidentialPardonForm::getTarget( void ) const
{
	return ( this->_target );
}

void					PresidentialPardonForm::execute( Bureaucrat const & executer ) const
{
	checkExecutability( executer );
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}
