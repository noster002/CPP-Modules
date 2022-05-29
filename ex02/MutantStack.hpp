/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:34:35 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/30 00:56:25 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iterator>
# include <deque>

template< typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{

	public:

		MutantStack<T, Container>( void ) : std::stack<T, Container>()
		{
			return ;
		}

		MutantStack<T, Container>( Container const & other ) \
			: std::stack<T, Container>( other )
		{
			return ;
		}

		MutantStack<T, Container>( MutantStack<T, Container> const & other ) \
			: std::stack<T, Container>()
		{
			*this = other;
			return ;
		}

		~MutantStack<T, Container>( void )
		{
			return ;
		}

		MutantStack<T, Container>&	operator=( MutantStack<T, Container> const & rhs )
		{
			( void )rhs;
			return ( *this );
		}

		typedef typename std::stack<T, Container>::container_type::iterator	iterator;

		iterator		begin( void )
		{
			return ( this->c.begin() );
		}

		iterator		end( void )
		{
			return ( this->c.end() );
		}

};

#endif
