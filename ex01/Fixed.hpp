/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:45:01 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/26 16:30:20 by nosterme         ###   ########.fr       */
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
	
	private:

		int					_fixedPointNbr;
		static int const	_fractionalBitNbr;

};

std::ostream&	operator<<( std::ostream& out, Fixed const & f );

#endif
