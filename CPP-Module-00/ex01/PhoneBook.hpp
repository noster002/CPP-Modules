/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:15:57 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 20:45:41 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "main.hpp"

class	PhoneBook
{

	public:

		PhoneBook(void);
		~PhoneBook(void);
		int	get_membercount(void) const;
		Contact	get_member(int nbr) const;
		void	increment_membercount(void);
		void	set_member(Contact member, int nbr);

	private:

		int		_membercount;
		Contact	_members[8];

};

#endif