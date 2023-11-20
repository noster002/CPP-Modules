/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:31:30 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 16:59:57 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# ifndef NBR_OF_SLOTS
#  define NBR_OF_SLOTS 4
# endif
# define MAX_DROPPED 100

class	Character : public ICharacter
{

	public:

		Character( void );
		Character( std::string const & name );
		Character( Character const & other );
		~Character( void );

		Character&	operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		AMateria*			getSlot( int idx ) const;
		AMateria*			getFloor( int idx ) const;
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );

	private:

		std::string const	_name;
		AMateria*			_slot[NBR_OF_SLOTS];
		AMateria*			_floor[MAX_DROPPED];

		void				_setSlot( int idx, AMateria* m );
		void				_setFloor( AMateria* m );

};

#endif
