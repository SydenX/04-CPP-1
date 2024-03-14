/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:03:21 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/14 15:35:05 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook initialized" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destroyed" << std::endl;
	return;
}

std::string	print_table(std::string str)
{
	std::string newstr = str;
	if (newstr.size() > 10){
		newstr[9] = '.';
		newstr.erase(10, newstr.size());
	}
	while (newstr.size() < 10)
		newstr.append(" ");
	return newstr;
}

void	PhoneBook::display(void){
	for(int j = 0; j < 8; j++){
		int	toDisplay = j;
		for(int i = 0; i < 8; i++)
			if (this->contacts[i].id == toDisplay + 1)
				std::cout << ((this->contacts[i].id - 1) % 8) + 1 << " | " << print_table(this->contacts[i].firstname) << " | " << print_table(this->contacts[i].lastname) << " | " << print_table(this->contacts[i].nickname) << std::endl;
		toDisplay++;
	}
}

Contact *PhoneBook::newcontact(void) {
	Contact *toreturn;
	for(int i = 0; i < 8; i++)
		if (this->contacts[i].id == -1)
			toreturn = &this->contacts[i];

	int lastId = 0;
	for(int i = 0; i < 8; i++)
		if (this->contacts[i].id > lastId)
			lastId = this->contacts[i].id;
			
	if (toreturn == NULL){
		int firstId = lastId;
		int firstContactId = 0;
		for(int i = 0; i < 8; i++){
			if (this->contacts[i].id < firstId){
				firstId = this->contacts[i].id;
				firstContactId = i;
			}
		}
		toreturn = &this->contacts[firstContactId];
		toreturn->id = lastId + 1;
		for(int i = 0; i < 8; i++)
			this->contacts[i].id = this->contacts[i].id - 1;
	} else 
		toreturn->id = lastId + 1;
	return toreturn;
}
