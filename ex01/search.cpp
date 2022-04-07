/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:07:57 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 21:16:44 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static std::string	set_string(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

static void	display_all_members(PhoneBook *yellow_pages)
{
	Contact	tmp;
	int		cnt;

	cnt = 0;
	std::cout << "___________________________________________" << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "          |          |          |          " << std::endl;
	while (++cnt <= 8 && cnt <= yellow_pages->get_membercount())
	{
		tmp = yellow_pages->get_member(cnt - 1);
		std::cout << std::setiosflags(std::ios_base::right);
		std::cout << std::setw(10);
		std::cout << cnt << "|";
		std::cout << std::setw(10);
		std::cout << set_string(tmp.firstName) << "|";
		std::cout << std::setw(10);
		std::cout << set_string(tmp.lastName) << "|";
		std::cout << std::setw(10);
		std::cout << set_string(tmp.nickname) << std::endl;
	}
	std::cout << std::endl;
	return;
}

static void	display_member_detail(Contact member)
{
	std::cout << "First name:        " << member.firstName << std::endl;
	std::cout << "Last name:         " << member.lastName << std::endl;
	std::cout << "Nickname:          " << member.nickname << std::endl;
	std::cout << "Phone number:      " << member.get_phoneNumber() << std::endl;
	std::cout << "Darkest secret:    " << member.get_darkestSecret() << std::endl;
	return;
}

static int	get_index(std::string str)
{
	if (str[1] != '\0')
		return (0);
	if (isdigit(str[0]))
		return (str[0] - '0');
	return (0);
}

void	search_contact(PhoneBook *yellow_pages)
{
	std::string	str;
	int			index;

	display_all_members(yellow_pages);
	std::cout << "Details for index: ";
	std::cin >> str;
	index = get_index(str);
	std::cout << std::endl;
	if (index > 0 && index <= 8 && \
		index <= yellow_pages->get_membercount())
		display_member_detail(yellow_pages->get_member(index - 1));
	else
		std::cout << " ~ not a valid index ~ " << std::endl;
	std::cout << std::endl;
	return;
}
