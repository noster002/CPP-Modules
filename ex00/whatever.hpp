/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:44:07 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/24 14:35:13 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap( T& x, T& y )
{
	T	copy = x;
	x = y;
	y = copy;
	return ;
}

template< typename T >
T const &	max( T const & x, T const & y )
{
	return ( x > y ? x : y );
}

template< typename T >
T const &	min( T const & x, T const & y )
{
	return ( x < y ? x : y );
}

#endif
