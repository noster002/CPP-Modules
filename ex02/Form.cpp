/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 22:07:21 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 15:10:09 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ) : _name( "" ), _isSigned( false ), \
					_gradeToSign( Form::_highestGrade ), \
					_gradeToExecute( Form::_highestGrade )
{
	return ;
}

Form::Form( std::string const & name, \
			int const gradeToSign, \
			int const gradeToExecute ) : _name( name ), _isSigned( false ), \
										_gradeToSign( gradeToSign ), \
										_gradeToExecute( gradeToExecute)
{
	this->_checkGrade( this->_gradeToSign );
	this->_checkGrade( this->_gradeToExecute );
	return ;
}

Form::Form( Form const & other ) : _name( other.getName() ), \
									_isSigned( other.getIsSigned() ), \
									_gradeToSign( other.getGradeToSign() ), \
									_gradeToExecute( other.getGradeToExecute() )
{
	return ;
}

Form::~Form( void )
{
	return ;
}

Form&				Form::operator=( Form const & rhs )
{
	this->_isSigned = rhs.getIsSigned();
	return ( *this );
}

std::string const &	Form::getName( void ) const
{
	return ( this->_name );
}

bool				Form::getIsSigned( void ) const
{
	return ( this->_isSigned );
}

int					Form::getGradeToSign( void ) const
{
	return ( this->_gradeToSign );
}

int					Form::getGradeToExecute( void ) const
{
	return ( this->_gradeToExecute );
}

void				Form::beSigned( Bureaucrat const & bureaucrat )
{
	if ( this->getIsSigned() )
	{
		std::cout << this->getName() << " is already signed." << std::endl;
		return ;
	}
	if ( bureaucrat.getGrade() <= this->getGradeToSign() )
		_isSigned = true;
	else
		throw Form::GradeTooLowException();
	std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
	return ;
}

void				Form::checkExecutability( Bureaucrat const & executer ) const
{
	if ( executer.getGrade() > this->getGradeToExecute() || \
		!( this->getIsSigned() ) )
		throw Form::CantExecuteForm();
}

void				Form::_checkGrade( int const grade ) const
{
	if ( grade < Form::_highestGrade )
		throw Form::GradeTooHighException();
	else if ( grade > Form::_lowestGrade )
		throw Form::GradeTooLowException();
	return ;
}

int	Form::_highestGrade = 1;
int	Form::_lowestGrade = 150;

char const *		Form::GradeTooHighException::what( void ) const throw ()
{
	return ( "grade is too high ( form )" );
}

char const *		Form::GradeTooLowException::what( void ) const throw ()
{
	return ( "grade is too low ( form )" );
}

char const *		Form::CantExecuteForm::what( void ) const throw ()
{
	return ( "cant execute form" );
}

std::ostream&		operator<<( std::ostream& out, Form const & rhs )
{
	out << rhs.getName() << ", ";
	if ( !( rhs.getIsSigned() ) )
		out << "un";
	out << "signed form with requirement of grade " \
		<< rhs.getGradeToSign() << " to sign and grade " \
		<< rhs.getGradeToExecute() << " to execute" << std::endl;
	return ( out );
}
