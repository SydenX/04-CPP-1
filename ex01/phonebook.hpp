/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:03:19 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/14 15:35:13 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class	PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact contacts[8];

		Contact *newcontact();
		void	display();
};

#endif