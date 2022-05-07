/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 14:31:30 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 14:39:34 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# define NBR_OF_SLOTS 4

class	Character : public ICharacter
{

	public:

		Character( void );
		Character( std::string const & name );
		Character( Character const & other );
		~Character( void );

		Character&	operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		void				equip( AMateria* m );
		void				unequip( int idx );
		void				use( int idx, ICharacter& target );

	private:

		std::string const	_name;
		AMateria*			_slot[NBR_OF_SLOTS];

};

#endif
