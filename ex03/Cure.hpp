/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:09:38 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 14:12:01 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class	Cure : public AMateria
{

	public:

		Cure( void );
		Cure( Cure const & other );
		~Cure( void );

		Cure&		operator=( Cure const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif
