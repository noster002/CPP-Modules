/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:38:22 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/04 15:09:43 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{

	public:

		Animal( void );
		Animal( Animal const & other );
		virtual ~Animal( void );

		Animal&			operator=( Animal const & rhs );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;

	protected:

		std::string		_type;

};

#endif
