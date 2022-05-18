/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:45:49 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/17 14:04:00 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include <exception>

class	Form;

class	Bureaucrat
{

	public:

		Bureaucrat( std::string const name, int grade );
		Bureaucrat( Bureaucrat const & other );
		~Bureaucrat( void );

		Bureaucrat&			operator=( Bureaucrat const & rhs );

		std::string const &	getName( void ) const;
		int					getGrade( void ) const;
		void				incrementGrade( void );
		void				decrementGrade( void );
		bool				signForm( Form& form ) const;

		class				GradeTooHighException;
		class				GradeTooLowException;

	private:

		std::string const	_name;
		int					_grade;

		static int			_highestGrade;
		static int			_lowestGrade;

		void				_checkGrade( void ) const;

		Bureaucrat( void );

};

class	Bureaucrat::GradeTooHighException : public std::exception
{

	public:

		char const *	what( void ) const throw ();

};

class	Bureaucrat::GradeTooLowException : public std::exception
{

	public:

		char const *	what( void ) const throw ();

};

std::ostream&	operator<<( std::ostream& out, Bureaucrat const & rhs );

#endif
