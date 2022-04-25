/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:18:29 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 23:30:21 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class	HumanB
{

	public:

		HumanB( std::string name );
		~HumanB( void );
		void	setWeapon( Weapon& weapon );
		void	attack( void ) const;

	private:

		std::string	_name;
		Weapon*		_weapon;

};

#endif