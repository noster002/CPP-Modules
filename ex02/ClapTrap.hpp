/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:58:54 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/01 23:49:50 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class	ClapTrap
{

	public:

		ClapTrap( std::string const & name );
		ClapTrap( std::string const & name, unsigned int const hp, \
					unsigned int const ep, unsigned int const ad );
		ClapTrap( ClapTrap const & other );
		~ClapTrap( void );

		ClapTrap&			operator=( ClapTrap const & other );

		std::string const &	getName( void ) const;
		unsigned int		getHp( void ) const;
		void				setHp( unsigned int const amount );
		unsigned int		getEp( void ) const;
		void				decrementEp( void );
		unsigned int		getAd( void ) const;

		void				attack( std::string const & target );
		void				takeDamage( unsigned int amount );
		void				beRepaired( unsigned int amount );
		bool				isOperational( void ) const;

	protected:

		std::string const	_name;
		unsigned int		_hp;
		unsigned int		_ep;
		unsigned int		_ad;

		bool				_isOutOfEnergy( void ) const;
		bool				_isBroken( void ) const;

	private:

		ClapTrap( void );

};

#endif
