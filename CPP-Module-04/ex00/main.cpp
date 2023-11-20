/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:40:10 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/04 15:31:17 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	std::cout << std::endl << "Animal: " << std::endl << std::endl;
	{
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Cat*		k = new Cat();
		const Animal*	i = new Cat( *k );

		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << k->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		k->makeSound();

		delete k;
		delete i;
		delete j;
		delete meta;
	}
	std::cout << std::endl << "WrongAnimal: " << std::endl << std::endl;
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	i = new WrongCat();
		const WrongCat*		j = new WrongCat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound(); //will output the cat sound!

		delete meta;
		delete i;
		delete j;
	}
	return ( 0 );
}
