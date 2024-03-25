/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:35 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 14:53:09 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
		return (std::cout << "Error: use -> ./HarlFilter <Level (String)>" << std::endl, argc);
	Harl	harl = Harl();
	std::cout << std::endl;
	harl.complain(argv[1]);
	std::cout << std::endl;
	return 0;
}