/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:04:40 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 22:10:48 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class	Weapon
{

	public:

		Weapon( std::string type );
		~Weapon( void );
		std::string const &	getType( void ) const;
		void				setType( std::string type );

	private:

		std::string	_type;

};

#endif