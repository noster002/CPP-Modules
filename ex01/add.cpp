/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:07:02 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 20:41:44 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	add_contact(PhoneBook *yellow_pages)
{
	Contact	member;

	std::cout << std::endl;
	member.set_data();
	std::cout << std::endl;
	yellow_pages->set_member(member, yellow_pages->get_membercount() % 8);
	yellow_pages->increment_membercount();
	return;
}
