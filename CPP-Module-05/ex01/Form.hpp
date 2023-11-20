/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:42:12 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 14:05:45 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat;

class	Form
{

	public:

		Form( std::string const & name, int const gradeToSign, int const gradeToExecute );
		Form( Form const & other );
		~Form( void );

		Form&				operator=( Form const & rhs );

		std::string const &	getName( void ) const;
		bool				getIsSigned( void ) const;
		int					getGradeToSign( void ) const;
		int					getGradeToExecute( void ) const;
		void				beSigned( Bureaucrat const & bureaucrat );

		class				GradeTooHighException;
		class				GradeTooLowException;

	private:

		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSign;
		int const			_gradeToExecute;

		static int			_highestGrade;
		static int			_lowestGrade;

		void				_checkGrade( int const grade ) const;

		Form( void );

};

class	Form::GradeTooHighException : public std::exception
{

	public:

		char const *		what( void ) const throw ();

};

class	Form::GradeTooLowException : public std::exception
{

	public:

		char const *		what( void ) const throw ();

};

std::ostream&	operator<<( std::ostream& out, Form const & rhs );

#endif
