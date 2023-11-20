/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:53:24 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/29 19:30:48 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <iterator>
# include <stdexcept>
# include <algorithm>
# include <cstdlib>
# include <ctime>
# include <iostream>

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
		void				randomFill( void );
		void				appendIteratorRange( std::vector<int>::iterator begin, \
												std::vector<int>::iterator end );

		int					shortestSpan( void ) const;
		int					longestSpan( void ) const;

	private:

		unsigned int		_storedSize;
		std::vector<int>	_storage;

};

std::ostream&	operator<<( std::ostream& out, Span const & rhs );

#endif
