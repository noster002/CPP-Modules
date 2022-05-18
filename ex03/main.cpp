/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:45:13 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/18 15:26:06 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	Bureaucrat	b( "bob", 5 );
	Intern		someRandomIntern;
	Form*		rrf = NULL;

	rrf = someRandomIntern.makeForm( "anything", "Amy" );
	if ( rrf )
	{
		delete rrf;
		rrf = NULL;
	}
	rrf = someRandomIntern.makeForm( "robotomy request", "Bender" );
	if ( rrf )
	{
		delete rrf;
		rrf = NULL;
	}
	rrf = someRandomIntern.makeForm( "shrubbery creation", "Charly" );
	if ( rrf )
	{
		delete rrf;
		rrf = NULL;
	}
	rrf = someRandomIntern.makeForm( "presidential pardon", "Dennis" );
	if ( rrf )
	{
		try
		{
			rrf->beSigned( b );
			rrf->execute( b );
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}
		delete rrf;
		rrf = NULL;
	}

	return ( 0 );
}
