/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:45:13 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/18 15:04:19 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat	b( "bob", 50 );
	Bureaucrat	c( "charly", 100 );

	try
	{
		Form	f( "paper", 1, 0 );

		std::cout << f;
	}
	catch ( Form::GradeTooHighException& e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( Form::GradeTooLowException& e )
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
		Form	f( "paper", 151, 1 );

		std::cout << f;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form	f( "paper", 100, 1 );

		std::cout << f;
		c.signForm( f );
		std::cout << f;
		f.beSigned( c );
		std::cout << f;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form	f( "paper", 30, 1 );

		std::cout << f;
		b.signForm( f );
		std::cout << f;
		f.beSigned( b );
		std::cout << f;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Form	f( "paper", 80, 1 );

		std::cout << f;
		f.beSigned( b );
		std::cout << f;
		c.signForm( f );
		std::cout << f;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}
