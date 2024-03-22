/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:47 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 12:09:52 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(){
	std::cout << this->name << " attack with their " << this->Weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, class Weapon weapon) : Weapon(weapon) {
	std::cout << "HumanA created" << std::endl;
	this->name = name;
	return;
}

HumanA::~HumanA(void){
	std::cout << "HumanA destroyed" << std::endl;
	return;
}