/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:17:45 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/11 20:19:21 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie
{

	public:

		Zombie( void );
		~Zombie( void );
		void	nameZombie( std::string name );
		void	announce( void ) const;

	private:

		std::string	_name;

};

#endif