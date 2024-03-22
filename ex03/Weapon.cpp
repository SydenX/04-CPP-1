/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 12:07:03 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type){
	this->type = type;
}

const std::string& Weapon::getType(){
	return this->type;
}

Weapon::Weapon(std::string type) {
	std::cout << "Weapon created" << std::endl;
	this->setType(type);
	return;
}

Weapon::~Weapon(void){
	std::cout << "Weapon with type > " << this->getType() << " < destroyed" << std::endl;
	return;
}