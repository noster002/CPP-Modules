/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:52:50 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/27 17:03:14 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class	Point
{

	public:

		Point( void );
		Point( float const x, float const y );
		Point( Fixed const & x, Fixed const & y );
		Point( Point const & other );
		Point const &	operator=( Point const & other );
		~Point( void );

		Fixed const &	getX( void ) const;
		Fixed const &	getY( void ) const;

	private:

		Fixed const	_x;
		Fixed const	_y;

};

#endif
