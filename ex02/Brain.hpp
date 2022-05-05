/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:39:03 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/04 16:12:51 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class	Brain
{

	public:

		Brain( void );
		Brain( Brain const & other );
		~Brain( void );

		Brain&				operator=( Brain const & rhs );

		std::string const	getIdea( unsigned int index ) const;
		void				setIdea( std::string const & idea, unsigned int index );

	private:

		std::string	_idea[100];

};

#endif
