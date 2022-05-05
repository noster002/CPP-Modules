/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:08:36 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:11:01 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class	Dog : public Animal
{
	
	public:

		Dog( void );
		Dog( Dog const & other );
		~Dog( void );

		Dog&	operator=( Dog const & rhs );
		Animal&	operator=( Animal const & rhs );

		Brain*	getBrain( void ) const;
		void	makeSound( void ) const;

	private:

		Brain*	_brain;

};

#endif
