/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:34:07 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/30 01:06:01 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "MutantStack.hpp"

int	main( void )
{
	{
		std::cout << "Provided test with MutantStack" << std::endl << std::endl;

		MutantStack<int>	mstack;

		mstack.push( 5 );
		mstack.push( 17 );

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push( 3 );
		mstack.push( 5 );
		mstack.push( 737 );
		//[...]
		mstack.push( 0 );

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		++it;
		--it;
		while ( it != ite )
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s( mstack );
	}
	{
		std::cout << std::endl << "Provided test with List" << std::endl << std::endl;

		std::list<int>	list;

		list.push_back( 5 );
		list.push_back( 17 );

		std::cout << list.back() << std::endl;

		list.pop_back();

		std::cout << list.size() << std::endl;

		list.push_back( 3 );
		list.push_back( 5 );
		list.push_back( 737 );
		//[...]
		list.push_back( 0 );

		std::list<int>::iterator	it = list.begin();
		std::list<int>::iterator	ite = list.end();

		++it;
		--it;
		while ( it != ite )
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << std::endl << "My test" << std::endl;

		std::deque<int>						mydeque( 3, 100 );
		std::vector<int>					myvector( 2, 200 );

		MutantStack<int>					first;
		MutantStack<int>					second( mydeque );

		MutantStack<int, std::vector<int> >	third;
		MutantStack<int, std::vector<int> >	fourth( myvector );

		std::cout << "size of first: " << first.size() << std::endl;
		std::cout << "size of second: " << second.size() << std::endl;
		std::cout << "size of third: " << third.size() << std::endl;
		std::cout << "size of fourth: " << fourth.size() << std::endl;
		std::cout << std::endl;

		MutantStack<int>::iterator						dit;
		MutantStack<int, std::vector<int> >::iterator	vit;

		first.push( 3 );
		second.pop();
		fourth.push( -2 );

		std::cout << "size of first: " << first.size() << std::endl;
		for ( dit = first.begin(); dit != first.end(); ++dit )
			std::cout << *dit << std::endl;
		std::cout << "size of second: " << second.size() << std::endl;
		for ( dit = second.begin(); dit != second.end(); ++dit )
			std::cout << *dit << std::endl;
		std::cout << "size of third: " << third.size() << std::endl;
		for ( vit = third.begin(); vit != third.end(); ++vit )
			std::cout << *vit << std::endl;
		std::cout << "size of fourth: " << fourth.size() << std::endl;
		for ( vit = fourth.begin(); vit != fourth.end(); ++vit )
			std::cout << *vit << std::endl;
		std::cout << "top of fourth: " << fourth.top() << std::endl;
	}
	return ( 0 );
}
