/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 14:55:02 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {   std::cout << "DEBUG  : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl; }
void	Harl::info(void) {    std::cout << "INFO   : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl; }
void	Harl::warning(void) { std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; }
void	Harl::error(void) {   std::cout << "ERROR  : This is unacceptable ! I want to speak to the manager now." << std::endl;}

void	Harl::complain(std::string level){
	int p = -1;
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	while (++p < 4)
		if (levels[p].compare(level) == 0)
			break;
	switch (p) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Harl::Harl() {
	// std::cout << "Harl created" << std::endl;
	return;
}

Harl::~Harl(void){
	// std::cout << "Harl destroyed" << std::endl;
	return;
}