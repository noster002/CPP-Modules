/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:47:08 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/23 18:56:22 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main( void )
{
	{
		std::cout << "Provided test:" << std::endl << std::endl;
		Array<int>	numbers( MAX_VAL );
		int*		mirror = new int[MAX_VAL];

		srand( time( NULL ) );
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int	value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int>	tmp = numbers;
			Array<int>	test(tmp);
		}

		for ( int i = 0; i < MAX_VAL; i++ )
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return ( 1 );
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch( const std::exception& e )
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for ( int i = 0; i < MAX_VAL; i++ )
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
	}
	{
		std::cout << std::endl << "My test:" << std::endl << std::endl;

		Array<std::string>	stringArray( 3 );
		Array<int>			intArray( 5 );
		Array<int>			emptyArray;

		stringArray[0] = "Hello World!";
		stringArray[1] = "This is my first array template";
		stringArray[2] = "yay";
		srand( time( NULL ) );
		for ( int i = 0; i < 5; ++i )
		{
			intArray[i] = rand();
		}
		std::cout << "StringArray length: " << stringArray.size() << std::endl;
		std::cout << "StringArray:" << std::endl << stringArray;
		std::cout << "IntArray length: " << intArray.size() << std::endl;
		std::cout << "EmptyArray length: " << emptyArray.size() << std::endl;
		std::cout << "IntArray:" << std::endl << intArray;

		emptyArray = intArray;
		std::cout << "EmptyArray length: " << emptyArray.size() << std::endl;
		std::cout << "EmptyArray:" << std::endl << emptyArray;

		try
		{
			std::cout << "Trying to access intArray at index 2." << std::endl;
			intArray[2] = 0;
			std::cout << "Successful!" << std::endl;
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "Trying to access intArray at index -2." << std::endl;
			intArray[-2] = 0;
			std::cout << "Successful!" << std::endl;
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << "Trying to access intArray at index 12." << std::endl;
			intArray[12] = 0;
			std::cout << "Successful!" << std::endl;
		}
		catch ( std::exception& e )
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "IntArray:" << std::endl << intArray;
		std::cout << "EmptyArray:" << std::endl << emptyArray;
	}
	return ( 0 );
}
