/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:14:41 by nosterme          #+#    #+#             */
/*   Updated: 2022/05/11 14:37:17 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : \
	Form( "ShrubberyCreationForm", 145, 137 ), _target( "" )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) : \
	Form( "ShrubberyCreationForm", 145, 137 ), _target( target )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & other ) : \
	Form( "ShrubberyCreationForm", 145, 137 ), _target( other.getTarget() )
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	rhs.getTarget();
	return ( *this );
}

std::string const &		ShrubberyCreationForm::getTarget( void ) const
{
	return ( this->_target );
}

void					ShrubberyCreationForm::execute( Bureaucrat const & executer ) const
{
	checkExecutability( executer );
	std::string const	filename( this->getTarget() + "_shrubbery" );
	std::ofstream		file;

	file.open( filename.c_str() );
	file << "                                                .--." << std::endl;
	file << "                                               `.  \\" << std::endl;
	file << "                                                 \\  \\" << std::endl;
	file << "                                                  .  \\" << std::endl;
	file << "                                                  :   ." << std::endl;
	file << "                                                  |    ." << std::endl;
	file << "                                                  |    :" << std::endl;
	file << "                                                  |    |" << std::endl;
	file << "  ..._  ___                                       |    |" << std::endl;
	file << " `.\"\".`\'\'\'\'\"\"--..___                              |    |" << std::endl;
	file << " ,-\\  \\             \"\"-...__         _____________/    |" << std::endl;
	file << " / ` \" \'                    `\"\"\"\"\"\"\"\"                  ." << std::endl;
	file << " \\                                                      L" << std::endl;
	file << " (>                                                      \\" << std::endl;
	file << "/                                                         \\" << std::endl;
	file << "\\_    ___..---.                                            L" << std::endl;
	file << "  `--\'         \'.                                           \\" << std::endl;
	file << "                 .                                           \\_" << std::endl;
	file << "                _/`.                                           `.._" << std::endl;
	file << "             .'     -.                                             `." << std::endl;
	file << "            /     __.-Y     /''''''-...___,...--------.._            |" << std::endl;
	file << "           /   _.\"    |    /                \' .      \\   \'---..._    |" << std::endl;
	file << "          /   /      /    /                _,. \'    ,/           |   |" << std::endl;
	file << "          \\_,\'     _.\'   /              /\'\'     _,-\'            _|   |" << std::endl;
	file << "                  \'     /               `-----\'\'               /     |" << std::endl;
	file << "                  `...-\'                                       `...-\'" << std::endl;
	file.close();
	std::cout << "created ascii tree in " << filename << std::endl;
	return ;
}
