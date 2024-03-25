/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:22:13 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 13:03:29 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
	std::cout << "Zombie created" << std::endl;
	return;
}

Zombie::~Zombie(void){
	std::cout << "Zombie > " << this->getName() << " < destroyed" << std::endl;
	return;
}

void	Zombie::announce(void){
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}