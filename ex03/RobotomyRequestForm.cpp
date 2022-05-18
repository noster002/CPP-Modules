/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:05:32 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 15:26:17 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : \
	Form( "RobotomyRequestForm", 72, 45 ), _target( "" )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) : \
	Form( "RobotomyRequestForm", 72, 45 ), _target( target )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & other ) : \
	Form( "RobotomyRequestForm", 72, 45 ), _target( other.getTarget() )
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	rhs.getTarget();
	return ( *this );
}

std::string const &		RobotomyRequestForm::getTarget( void ) const
{
	return ( this->_target );
}

void					RobotomyRequestForm::execute( Bureaucrat const & executer ) const
{
	checkExecutability( executer );
	std::cout << "* drilling noises *" << std::endl;
	if ( std::rand() % 2 )
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomy of " << this->getTarget() << " failed." << std::endl;
	return ;
}
