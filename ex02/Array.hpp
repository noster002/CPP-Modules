/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:28:38 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/23 18:56:07 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdexcept>
# include <iostream>

template< typename T >
class	Array
{

	public:

		Array<T>( void ) : _size( 0 ), _array( NULL )
		{
			std::cout << "Empty constructor" << std::endl;
			return ;
		}

		Array<T>( unsigned int n ) : _size( n )
		{
			std::cout << "Default constructor" << std::endl;
			this->_array = new T[n];
		}

		Array<T>( Array<T> const & other ) : _size( 0 )
		{
			std::cout << "Copy constructor" << std::endl;
			*this = other;
			return ;
		}

		~Array<T>( void )
		{
			std::cout << "Destructor" << std::endl;
			if ( this->_size > 0 )
				delete [] this->_array;
			return ;
		}

		Array<T>&	operator=( Array<T> const & rhs )
		{
			std::cout << "Copy assignment operator overload" << std::endl;
			if ( this == &rhs )
				return ( *this );
			if ( this->_size > 0 )
				delete [] this->_array;
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for ( int i = 0; i < this->_size; ++i )
			{
				this->_array[i] = rhs[i];
			}
			return ( *this );
		}

		T&			operator[]( int const index ) const
		{
			if ( index < 0 || index >= this->_size )
				throw std::out_of_range( "Index out of range" );
			return ( this->_array[index] );
		}

		int			size( void ) const
		{
			return ( this->_size );
		}

	private:

		int	_size;
		T*	_array;

};

template< typename T >
std::ostream&	operator<<( std::ostream& out, Array<T> const & rhs )
{
	for ( int i = 0; i < rhs.size(); ++i )
	{
		out << "Array at Index: " << i << ": " << rhs[i] << std::endl;
	}
	return ( out );
}

#endif
