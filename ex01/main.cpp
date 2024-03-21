/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:03:25 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/21 14:24:08 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void){
	int	N = 5;
	Zombie *horde = zombieHorde(N, "Zombars");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}