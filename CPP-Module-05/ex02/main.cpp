/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:45:13 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 15:26:22 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	Form*		form = NULL;
	Bureaucrat	a( "amy", 1 );
	Bureaucrat	b( "bob", 50 );
	Bureaucrat	c( "charly", 100 );
	Bureaucrat	d( "dennis", 150 );

	srand( time( NULL ) );
	try
	{
		form = new RobotomyRequestForm( "abc" );

		form->beSigned( b );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		form->execute( a );
		delete form;
		form = NULL;
	}
	catch ( Form::GradeTooHighException& e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( Form::GradeTooLowException& e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( Form::CantExecuteForm& e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( Bureaucrat::GradeTooHighException& e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( Bureaucrat::GradeTooLowException& e )
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm	s( "def" );

		s.beSigned( b );
		a.executeForm( s );
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		PresidentialPardonForm	p( "ghi" );

		p.beSigned( a );
		p.execute( d );
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		PresidentialPardonForm	p( "jkl" );

		p.beSigned( a );
		b.executeForm( p );
		p.execute( a );
		a.executeForm( p );
		p.execute( c );
		p.execute( a );
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}
