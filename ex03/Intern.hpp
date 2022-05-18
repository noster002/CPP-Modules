/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:01:57 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 16:01:41 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>

class	Form;

class	Intern
{

	public:

		Intern( void );
		Intern( Intern const & other );
		~Intern( void );

		Intern&	operator=( Intern const & rhs );

		Form*	makeForm( std::string const & form, std::string const & target );

	private:

		struct	s_formList;

};

typedef struct	Intern::s_formList
{

	std::string	formName;
	Form*		formType;

}				t_formList;

#endif
