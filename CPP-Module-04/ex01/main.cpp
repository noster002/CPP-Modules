/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:40:10 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 14:38:25 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	Animal*	a[6];
	Brain*	b;

	for ( int i = 0; i < 6; i++ )
	{
		std::cout << std::endl << i + 1 << std::endl;
		if ( ( i % 2 ) == 0 )
			a[i] = new Cat();
		else if ( ( i % 2 ) == 1 )
			a[i] = new Dog();
	}
	std::cout << std::endl;
	b = a[3]->getBrain();
	b->setIdea( "eat", 0 );
	a[3]->getBrain()->setIdea( "eat again", 1 );
	b->setIdea( "sleep", 2 );
	std::cout << "Type 4: " << a[3]->getType() << std::endl;
	std::cout << "Type 3: " << a[2]->getType() << std::endl;
	std::cout << "Idea 0: " << a[3]->getBrain()->getIdea( 0 ) << std::endl;
	std::cout << "Idea 1: " << b->getIdea( 1 ) << std::endl;
	std::cout << "Idea 2: " << a[3]->getBrain()->getIdea( 2 ) << std::endl;
	*a[2] = *a[3];
	std::cout << "Type 4: " << a[3]->getType() << std::endl;
	std::cout << "Type 3: " << a[2]->getType() << std::endl;
	std::cout << "Idea 0: " << a[2]->getBrain()->getIdea( 0 ) << std::endl;
	std::cout << "Idea 1: " << a[2]->getBrain()->getIdea( 1 ) << std::endl;
	std::cout << "Idea 2: " << a[2]->getBrain()->getIdea( 2 ) << std::endl;
	for ( int i = 0; i < 6; i++ )
	{
		std::cout << std::endl << i + 1 << std::endl;
		delete a[i];
	}
	return ( 0 );
}
