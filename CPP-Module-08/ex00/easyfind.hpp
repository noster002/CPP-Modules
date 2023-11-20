/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:48:17 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/25 13:50:55 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <algorithm>

template< typename T >
typename T::iterator	easyfind( T& container, int const occurence )
{
	typename T::iterator	it;

	it = std::find( container.begin(), container.end(), occurence );
	return ( it );
}

#endif
