/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:15 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 13:11:27 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type){
	this->_type = type;
}

const std::string& Weapon::getType(){
	return this->_type;
}

Weapon::Weapon(std::string type): _type(type) {
	std::cout << "Weapon created" << std::endl;
	return;
}

Weapon::~Weapon(void){
	std::cout << "Weapon with type > " << this->getType() << " < destroyed" << std::endl;
	return;
}