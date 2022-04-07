/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:15:41 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 16:18:08 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	handle_cmd(std::string cmd, PhoneBook *yellow_pages)
{
	if (cmd.compare("ADD") == 0)
		add_contact(yellow_pages);
	else if (cmd.compare("SEARCH") == 0)
		search_contact(yellow_pages);
	else if (cmd.compare("EXIT") == 0)
		return (0);
	return (1);
}

std::string	get_prompt(void)
{
	std::string	cmd;

	std::cout << "$ ";
	std::cin >> cmd;
	return (cmd);
}

int	main(void)
{
	int			work;
	PhoneBook	yellow_pages;
	std::string	cmd;

	work = 1;
	std::cout << "Welcome to our telephone customer service!" << std::endl;
	std::cout << std::endl << "Please enter your command here:" << std::endl;
	while (work)
	{
		cmd = get_prompt();
		work = handle_cmd(cmd, &yellow_pages);
	}
	return (0);
}
