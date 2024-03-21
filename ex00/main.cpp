/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:03:25 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/21 14:24:34 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void){
	Zombie *zomb = newZombie("Salut!");
	std::cout << zomb->getName() << std::endl;
	delete zomb;
	
	randomChump("Zombie2");
	return 0;
}