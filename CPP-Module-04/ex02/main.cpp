/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:40:10 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/05 14:38:55 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main( void )
{
	// AAnimal const *	a = new AAnimal();
	AAnimal const *	c = new Cat();
	AAnimal const *	d = new Dog();
	// AAnimal			e;
	Cat				f;
	Cat				g( f );

	f = *c;

	std::cout << std::endl;
	std::cout << "Type: " << c->getType() << "\t";
	c->makeSound();
	std::cout << "Type: " << d->getType() << "\t";
	d->makeSound();
	std::cout << "Type: " << f.getType() << "\t";
	f.makeSound();
	std::cout << "Type: " << g.getType() << "\t";
	g.makeSound();
	std::cout << std::endl;

	delete c;
	delete d;
	return ( 0 );
}
