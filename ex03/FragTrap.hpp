/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:28:16 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/03 13:28:14 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{

	public:

		FragTrap( void );
		FragTrap( std::string const & name );
		FragTrap( FragTrap const & other );
		~FragTrap( void );

		FragTrap&	operator=( FragTrap const & other );

		void		highFiveGuys( void ) const;

};

#endif
