/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:15:54 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 20:41:12 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void)
{
	this->_membercount = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int	PhoneBook::get_membercount(void) const
{
	return (this->_membercount);
}

Contact	PhoneBook::get_member(int nbr) const
{
	return (this->_members[nbr]);
}

void	PhoneBook::increment_membercount(void)
{
	this->_membercount += 1;
	return;
}

void	PhoneBook::set_member(Contact member, int nbr)
{
	this->_members[nbr] = member;
	return;
}
