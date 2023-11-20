/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:24:35 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 23:27:37 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"

class	HumanA
{

	public:

		HumanA( std::string name, Weapon& type );
		~HumanA( void );
		void	attack( void ) const;

	private:

		std::string	_name;
		Weapon&		_weapon;

};

#endif