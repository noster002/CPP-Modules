/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:04:55 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/04 15:21:59 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class	WrongAnimal
{

	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & other );
		virtual ~WrongAnimal( void );

		WrongAnimal&	operator=( WrongAnimal const & rhs );

		std::string		getType( void ) const;
		void			makeSound( void ) const;

	protected:

		std::string		_type;

};

#endif
