/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:20:16 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/24 14:37:39 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename T >
void	iter( T* array, int arrayLength, void ( *function )( T& ))
{
	for ( int i = 0; i < arrayLength; ++i )
	{
		function( array[i] );
	}
	return ;
}

#endif
