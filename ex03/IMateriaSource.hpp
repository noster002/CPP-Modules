/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:38:36 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/06 14:01:51 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

class	IMateriaSource
{

	public:

		virtual ~IMateriaSource( void ) {}

		virtual void		learnMateria( AMateria* m ) = 0;
		virtual AMateria*	createMateria( std::string const & type ) = 0;

};

#endif
