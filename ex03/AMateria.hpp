/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:02:24 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 14:37:52 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class	AMateria
{

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & other );
		virtual ~AMateria( void );

		AMateria&			operator=( AMateria const & rhs );

		std::string const &	getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target );

	protected:

		std::string const	_type;

};

#endif
