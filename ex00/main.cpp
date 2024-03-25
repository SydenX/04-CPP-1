/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:03:25 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 13:04:56 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void){
	Zombie *zomb = newZombie("Zombie1");
	std::cout << zomb->getName() << std::endl;
	zomb->announce();
	delete zomb;
	
	randomChump("Zombie2");
	return 0;
}