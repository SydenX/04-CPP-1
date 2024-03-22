/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:59 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 12:56:25 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(){
	if (this->_weapon != NULL)
		std::cout << this->_name << " attack with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " could't attack without a Weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& Weapon){
	this->_weapon = &Weapon;
}

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB created" << std::endl;
	this->_weapon = NULL;
	return;
}

HumanB::~HumanB(void){
	std::cout << "HumanB destroyed" << std::endl;
	return;
}