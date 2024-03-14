/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:39:17 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/14 15:35:20 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void){
	PhoneBook pb;
	std::string	buff[6];
	while (1)
	{
		std::cout << "Please enter a command: ADD, SEARCH, EXIT : ";
		std::cin >> buff[0];
		if (buff[0].compare("ADD") == 0){
			Contact	*newcontact = pb.newcontact();
			std::cout << "New Contact Setup," << std::endl;
			std::cout << "First name : ";
			std::cin >> buff[1];
			newcontact->firstname = buff[1];
			std::cout << "Last name : ";
			std::cin >> buff[2];
			newcontact->lastname = buff[2];
			std::cout << "Nickname : ";
			std::cin >> buff[3];
			newcontact->nickname = buff[3];
			std::cout << "Phone number : ";
			std::cin >> buff[4];
			newcontact->phone = buff[4];
			std::cout << "Darkest secret : ";
			std::cin >> buff[5];
			newcontact->secret = buff[5];
		} else if (buff[0].compare("SEARCH") == 0){
			pb.display();
		} else if (buff[0].compare("EXIT") == 0)
			break;
	}
	return 0;
}