/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:41:35 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 14:07:35 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & other );
		~PresidentialPardonForm( void );

		PresidentialPardonForm&	operator=( PresidentialPardonForm const & rhs );

		std::string const &		getTarget( void ) const;
		void					execute( Bureaucrat const & executer ) const;

	private:

		std::string const		_target;

		PresidentialPardonForm( void );

};

#endif
