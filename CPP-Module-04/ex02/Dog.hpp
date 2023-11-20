/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:08:36 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:33:55 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"

class	Dog : public AAnimal
{
	
	public:

		Dog( void );
		Dog( Dog const & other );
		~Dog( void );

		Dog&	operator=( Dog const & rhs );
		AAnimal&	operator=( AAnimal const & rhs );

		Brain*	getBrain( void ) const;
		void	makeSound( void ) const;

	private:

		Brain*	_brain;

};

#endif
