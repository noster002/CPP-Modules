/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:15:50 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 20:41:37 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::set_data(void)
{
	std::cout << "New contact:" << std::endl << std::endl;
	std::cout << "> First name: ";
	std::cin >> this->firstName;
	std::cout << "> Last name: ";
	std::cin >> this->lastName;
	std::cout << "> Nickname: ";
	std::cin >> this->nickname;
	std::cout << "> Phone number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "> Darkest secret: ";
	std::cin >> this->_darkestSecret;
	return;
}

std::string	Contact::get_phoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::get_darkestSecret(void) const
{
	return (this->_darkestSecret);
}
