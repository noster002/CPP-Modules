/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:39:45 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 15:46:12 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# ifndef NBR_OF_SLOTS
#  define NBR_OF_SLOTS 4
# endif

class	MateriaSource : public IMateriaSource
{

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & other );
		~MateriaSource( void );

		MateriaSource&	operator=( MateriaSource const & rhs );

		AMateria*		getSlot( int idx ) const;
		void			learnMateria( AMateria* m );
		AMateria*		createMateria( std::string const & type );

	private:

		AMateria*		_slot[NBR_OF_SLOTS];

		void			_setSlot( int idx, AMateria* m );

};

#endif
