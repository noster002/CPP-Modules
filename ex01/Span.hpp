/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:53:24 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/25 17:53:57 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <cstdlib>

class	Span
{

	public:

		Span( void );
		Span( unsigned int size );
		Span( Span const & other );
		~Span( void );

		Span&				operator=( Span const & rhs );

		unsigned int		size( void ) const;
		unsigned int		maxSize( void ) const;

		void				addNumber( int num );
		unsigned int		shortestSpan( void ) const;
		unsigned int		longestSpan( void ) const;

	private:

		unsigned int		_storedSize;
		std::vector<int>	_storage;

};

#endif
