/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:15:38 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 21:22:04 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>
# include "Contact.hpp"
# include "PhoneBook.hpp"

int		main(void);
void	add_contact(PhoneBook *yellow_pages);
void	search_contact(PhoneBook *yellow_pages);

#endif