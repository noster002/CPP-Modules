/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:39:45 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 14:56:03 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "AMateria.hpp"
# define NBR_OF_SLOTS 4

class	MateriaSource : public IMateriaSource
{

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & other );
		~MateriaSource( void );

		MateriaSource&	operator=( MateriaSource const & rhs );

		void		learnMateria( AMateria* m );
		AMateria*	createMateria( std::string const & type );

	private:

		AMateria*	_slot[NBR_OF_SLOTS];

};

#endif
