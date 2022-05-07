/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:36:29 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 14:02:28 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

class	ICharacter
{

	public:

		virtual ~Character( void ) {}

		virtual std::string const &	getName( void ) const = 0;
		virtual void				equip( AMateria* m ) = 0;
		virtual void				unequip( int idx ) = 0;
		virtual void				use( int idx, ICharacter& target ) = 0;

};

#endif
