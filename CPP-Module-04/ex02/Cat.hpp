/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:00:47 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 13:33:38 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"

class	Cat : public AAnimal
{

	public:

		Cat( void );
		Cat( Cat const & other );
		~Cat( void );

		Cat&	operator=( Cat const & rhs );
		AAnimal&	operator=( AAnimal const & rhs );

		Brain*	getBrain( void ) const;
		void	makeSound( void ) const;

	private:

		Brain*	_brain;

};

#endif
