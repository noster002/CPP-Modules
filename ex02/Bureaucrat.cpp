/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:46:26 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 15:28:53 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ) : _name( "" ), _grade( Bureaucrat::_lowestGrade )
{
	return ;
}

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name( name ), \
															_grade( grade )
{
	this->_checkGrade();
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & other ) : _name( other.getName() ), \
													_grade( other.getGrade() )
{
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat&			Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs.getGrade();
	return ( *this );
}

std::string const &	Bureaucrat::getName( void ) const
{
	return ( this->_name );
}

int					Bureaucrat::getGrade( void ) const
{
	return ( this->_grade );
}

void				Bureaucrat::incrementGrade( void )
{
	--( this->_grade );
	this->_checkGrade();
	return ;
}

void				Bureaucrat::decrementGrade( void )
{
	++( this->_grade );
	this->_checkGrade();
	return ;
}

bool				Bureaucrat::signForm( Form& form ) const
{
	if ( form.getIsSigned() )
	{
		std::cout << form.getName() << " is already signed." << std::endl;
		return ( false );
	}
	try
	{
		form.beSigned( *this );
		return ( true );
	}
	catch ( Form::GradeTooLowException& e )
	{
		std::cout << this->getName() << " couldn´t sign " << form.getName();
		std::cout << " because " << e.what() << std::endl;
		return ( false );
	}
}

bool				Bureaucrat::executeForm( Form const & form ) const
{
	try
	{
		form.execute( *this );
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		return ( true );
	}
	catch ( Form::CantExecuteForm& e )
	{
		std::cout << this->getName() << " couldn´t execute " << form.getName();
		std::cout << " because " << e.what() << std::endl;
		return ( false );
	}
}

void				Bureaucrat::_checkGrade( void ) const
{
	if ( this->getGrade() < Bureaucrat::_highestGrade )
		throw Bureaucrat::GradeTooHighException();
	else if ( this->getGrade() > Bureaucrat::_lowestGrade )
		throw Bureaucrat::GradeTooLowException();
	return ;
}

char const *	Bureaucrat::GradeTooHighException::what( void ) const throw ()
{
	return ( "grade is too high ( bureaucrat )" );
}

char const *	Bureaucrat::GradeTooLowException::what( void ) const throw ()
{
	return ( "grade is too low ( bureaucrat )" );
}

int	Bureaucrat::_highestGrade = 1;
int	Bureaucrat::_lowestGrade = 150;

std::ostream&	operator<<( std::ostream& out, Bureaucrat const & rhs )
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return ( out );
}
