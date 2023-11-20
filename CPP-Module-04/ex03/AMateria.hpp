/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:02:24 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 15:55:50 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class	AMateria
{

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & other );
		virtual ~AMateria( void );

		AMateria&	operator=( AMateria const & rhs );

		std::string const &	getType( void ) const;

		virtual AMateria*	clone( void ) const = 0;
		virtual void		use( ICharacter& target ) = 0;

	protected:

		std::string const	_type;

};

#endif
