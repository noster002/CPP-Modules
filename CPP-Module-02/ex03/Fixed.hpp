/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:20:07 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/27 11:56:43 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{

	public:

		Fixed( void );
		Fixed( int const number );
		Fixed( float const number );
		Fixed( Fixed const & other );
		Fixed&	operator=( Fixed const & other );
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		bool	operator>( Fixed const & other ) const;
		bool	operator<( Fixed const & other ) const;
		bool	operator>=( Fixed const & other ) const;
		bool	operator<=( Fixed const & other ) const;
		bool	operator==( Fixed const & other ) const;
		bool	operator!=( Fixed const & other ) const;

		Fixed	operator+( Fixed const & other ) const;
		Fixed	operator-( Fixed const & other ) const;
		Fixed	operator*( Fixed const & other ) const;
		Fixed	operator/( Fixed const & other ) const;

		Fixed&	operator++( void );
		Fixed	operator++( int );
		Fixed&	operator--( void );
		Fixed	operator--( int );

		static Fixed&			min( Fixed& one, Fixed& two );
		static Fixed const &	min( Fixed const & one, Fixed const & two );
		static Fixed&			max( Fixed& one, Fixed& two );
		static Fixed const &	max( Fixed const & one, Fixed const & two );

	private:

		int					_fixedPointNbr;
		static int const	_fractionalBitNbr;

};

std::ostream&	operator<<( std::ostream& out, Fixed const & f );

#endif
