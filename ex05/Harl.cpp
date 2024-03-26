/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/26 11:27:03 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {   std::cout << "DEBUG : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl; }
void	Harl::info(void) {    std::cout << "INFO  : I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl; }
void	Harl::warning(void) { std::cout << "WARN  : I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; }
void	Harl::error(void) {   std::cout << "ERROR : This is unacceptable ! I want to speak to the manager now." << std::endl;}

void	Harl::complain(std::string level){
	fptr	ftab[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int		realLevel = 0;
	while (levels[realLevel].compare(level) != 0 && realLevel < 4)
		realLevel++;
	if (realLevel >= 4)
		std::cout << "Level of log is incorrect, actual level received = " << level << std::endl;
	else
		(this->*ftab[realLevel])();
}

Harl::Harl() {
	// std::cout << "Harl created" << std::endl;
	return;
}

Harl::~Harl(void){
	// std::cout << "Harl destroyed" << std::endl;
	return;
}