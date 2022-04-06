/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:41:03 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/06 23:57:45 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	argn;
	int	charn;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		argn = 0;
		while (++argn < argc)
		{
			charn = -1;
			while (argv[argn][++charn] != '\0')
				std::cout << (char)toupper(argv[argn][charn]);
		}
		std::cout << std::endl;
	}
	return (0);
}
