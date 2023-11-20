/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:38:22 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:55:04 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "Brain.hpp"

class	AAnimal
{

	public:

		AAnimal( void );
		AAnimal( AAnimal const & other );
		virtual ~AAnimal( void );

		virtual AAnimal&	operator=( AAnimal const & rhs );

		std::string		getType( void ) const;
		virtual Brain*	getBrain( void ) const = 0;
		virtual void	makeSound( void ) const = 0;

	protected:

		std::string		_type;

};

#endif
