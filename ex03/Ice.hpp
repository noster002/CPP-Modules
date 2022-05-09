/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:04:00 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 15:55:39 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class	Ice : public AMateria
{

	public:

		Ice( void );
		Ice( Ice const & other );
		~Ice( void );

		Ice&		operator=( Ice const & rhs );

		AMateria*	clone( void ) const;
		void		use( ICharacter& target );

};

#endif
