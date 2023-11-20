/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosterme <nosterme@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:15:46 by nosterme          #+#    #+#             */
/*   Updated: 2022/04/07 20:42:16 by nosterme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "main.hpp"

class	Contact
{

	public:

		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		Contact(void);
		~Contact(void);
		void	set_data(void);
		std::string	get_phoneNumber(void) const;
		std::string	get_darkestSecret(void) const;

	private:

		std::string	_phoneNumber;
		std::string	_darkestSecret;

};

#endif