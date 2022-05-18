/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:45:13 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 13:59:57 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	b( "bob", 1 );

		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.incrementGrade();
		std::cout << b;
	}
	catch ( Bureaucrat::GradeTooHighException& e )
	{
		std::cerr << e.what() << std::endl;
	}
	catch ( Bureaucrat::GradeTooLowException& e )
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b( "bob", 150 );

		std::cout << b;
		b.incrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
		b.decrementGrade();
		std::cout << b;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b( "bob", 0 );

		std::cout << b;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat	b( "bob", 151 );

		std::cout << b;
	}
	catch ( std::exception& e )
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}
