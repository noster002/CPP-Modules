/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 13:23:31 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/12 13:39:01 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPtr = &string;
	std::string&	stringRef = string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address held by stringPtr: " << stringPtr << std::endl;
	std::cout << "Address held by stringRef: " << &stringRef << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value pointed to by stringPtr: " << *stringPtr << std::endl;
	std::cout << "Value pointed to by stringRef: " << stringRef << std::endl;
	return ( 0 );
}
