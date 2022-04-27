/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:30:22 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/27 17:18:09 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static bool	compareVectorPoints( Point const vec_start, Point const vec_end, \
								Point const p_tri, Point const point )
{
	Point	vec( vec_end.getX() - vec_start.getX(), vec_end.getY() - vec_start.getY() );
	Point	tri( p_tri.getX() - vec_start.getX(), p_tri.getY() - vec_start.getY() );
	Point	p( point.getX() - vec_start.getX(), point.getY() - vec_start.getY() );
	Fixed	neg( -1 );
	Point	v_orthogonal( neg * vec.getY(), vec.getX() );

	if ( ( v_orthogonal.getX() * tri.getX() + v_orthogonal.getY() * tri.getY() ) == 0 )
		return ( false );
	else if ( ( v_orthogonal.getX() * tri.getX() + v_orthogonal.getY() * tri.getY() ) > 0 )
		neg = Fixed( 1 );
	if ( ( v_orthogonal.getX() * p.getX() + v_orthogonal.getY() * p.getY() ) * neg <= 0 )
		return ( false );
	return ( true );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	if ( compareVectorPoints( a, b ,c ,point ) == false )
		return ( false );
	if ( compareVectorPoints( b, c ,a ,point ) == false )
		return ( false );
	if ( compareVectorPoints( c, a ,b ,point ) == false )
		return ( false );
	return ( true );
}
