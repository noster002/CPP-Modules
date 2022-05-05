/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:47 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:08:40 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class	Cat : public Animal
{

	public:

		Cat( void );
		Cat( Cat const & other );
		~Cat( void );

		Cat&	operator=( Cat const & rhs );
		Animal&	operator=( Animal const & rhs );

		Brain*	getBrain( void ) const;
		void	makeSound( void ) const;

	private:

		Brain*	_brain;

};

#endif
