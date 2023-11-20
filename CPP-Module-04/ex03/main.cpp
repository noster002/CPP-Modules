/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:01:09 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/09 18:09:38 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main( void )
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria( new Ice() );
	src->learnMateria( new Cure() );
	src->learnMateria( new Ice() );
	src->learnMateria( new Ice() );
	src->learnMateria( new Ice() );

	MateriaSource	src2;
	src2.learnMateria( new Ice() );

	ICharacter*	me = new Character( "me" );
	Character*	you1 = new Character( "you" );
	ICharacter*	you2 = new Character( *you1 );
	delete you1;

	AMateria*	tmp;
	tmp = src->createMateria( "ice" );
	me->equip( tmp );
	tmp = src->createMateria( "ice" );
	me->equip( tmp );
	tmp = src->createMateria( "cure" );
	me->equip( tmp );
	tmp = src->createMateria( "ice" );
	me->equip( tmp );
	tmp = src->createMateria( "cure" );
	me->equip( tmp );
	tmp = src2.createMateria( "cure" );
	you2->equip( tmp );
	tmp = src2.createMateria( "ice" );
	you2->equip( tmp );
	tmp = src->createMateria( "cure" );
	you2->equip( tmp );
	you2->unequip( 0 );
	you2->unequip( 2 );
	you2->unequip( -2 );
	me->unequip( 3 );
	tmp = src->createMateria( "cure" );
	me->equip( tmp );

	ICharacter*	bob = new Character( "bob" );
	Character*	amy1 = new Character( "amy" );
	ICharacter*	amy2 = new Character( *amy1 );
	delete amy1;

	Character	henry( "henry" );
	tmp = src2.createMateria( "ice" );
	henry.equip( tmp );

	me->use( 0, *bob );
	me->use( 1, *bob );
	me->use( 2, *bob );
	me->use( 3, *bob );
	me->use( 4, *bob );
	you2->use( -2, *amy2 );
	you2->use( 0, *amy2 );
	you2->use( 1, *amy2 );
	henry.use( 0, henry );

	delete bob;
	delete amy2;
	delete you2;
	delete me;
	delete src;

	return ( 0 );
}
