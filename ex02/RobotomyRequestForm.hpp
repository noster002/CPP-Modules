/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:59:08 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 14:07:49 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm( std::string const & target );
		RobotomyRequestForm( RobotomyRequestForm const & other );
		~RobotomyRequestForm( void );

		RobotomyRequestForm&	operator=( RobotomyRequestForm const & rhs );

		std::string const &		getTarget( void ) const;
		void					execute( Bureaucrat const & executer ) const;

	private:

		std::string const		_target;

		RobotomyRequestForm( void );

};

#endif
