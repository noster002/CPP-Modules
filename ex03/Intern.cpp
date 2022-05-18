/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:05:23 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 16:23:37 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void )
{
	return ;
}

Intern::Intern( Intern const & other )
{
	*this = other;
	return ;
}

Intern::~Intern( void )
{
	return ;
}

Intern&	Intern::operator=( Intern const & rhs )
{
	this->~Intern();
	new ( this ) Intern( rhs );
	return ( *this );
}

Form*	Intern::makeForm( std::string const & form, std::string const & target )
{
	Form*				retForm = NULL;
	t_formList			formList[3] = \
	{
		{ "shrubbery creation", new ShrubberyCreationForm( target ) }, \
		{ "robotomy request", new RobotomyRequestForm( target ) }, \
		{ "presidential pardon", new PresidentialPardonForm( target ) }\
	};

	for ( int i = 0; i < 3; ++i )
	{
		if ( form == formList[i].formName )
			retForm = formList[i].formType;
		else
			delete formList[i].formType;
	}
	if ( retForm != NULL )
		std::cout << "Intern creates " << retForm->getName() << std::endl;
	else
		std::cout << "No such form" << std::endl;
	return ( retForm );
}
