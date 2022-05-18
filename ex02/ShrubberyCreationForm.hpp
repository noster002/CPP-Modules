/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:11:41 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 14:07:57 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm( std::string const & target );
		ShrubberyCreationForm( ShrubberyCreationForm const & other );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const & rhs );

		std::string const &		getTarget( void ) const;
		void					execute( Bureaucrat const & executer ) const;

	private:

		std::string const		_target;

		ShrubberyCreationForm( void );

};

#endif
