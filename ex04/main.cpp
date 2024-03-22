/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:35 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 13:34:35 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4)
		return (std::cout << "Please enter 3 argc; <file> <occurence to replace> <replace by>" << std::endl, 1);
	std::ifstream file1(argv[1]);
	if (file1.good()){
		std::string str;
		str.reserve(file1.tellg());
		str.assign((std::istreambuf_iterator<char>(file1)),
            std::istreambuf_iterator<char>());
		// while (getline(file1, line)){
		str.replace(str.find(argv[2]), sizeof(argv[2]) - 1, argv[3]);
		std::cout << str;
		// }
		file1.close();
	} else return (std::cout << "File " << argv[1] << " do not exist" << std::endl, 1);
	return 0;
}