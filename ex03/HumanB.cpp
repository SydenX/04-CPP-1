/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:59 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 12:12:49 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(){
	if (this->Weapon)
		std::cout << this->name << " attack with their " << this->Weapon.getType() << std::endl;
	else
		std::cout << this->name << " could't attack without a Weapon" << std::endl;
}

void	HumanB::setWeapon(class Weapon Weapon){
	this->Weapon = Weapon;
}

HumanB::HumanB(std::string name) : Weapon(NULL){
	std::cout << "HumanB created" << std::endl;
	this->name = name;
	return;
}

HumanB::~HumanB(void){
	std::cout << "HumanB destroyed" << std::endl;
	return;
}