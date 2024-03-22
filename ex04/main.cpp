/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:35 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 14:35:34 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string *str, std::string from, std::string to)
{
	std::string cpy = *str;
	int startAt;
	for(int i = 0; cpy[i] != 0; i++) {
		int j = 0;
		while (cpy[i] == from[j]){
			j++;
			i++;
		}
		if (j == from.size()){
			startAt = i - j;
			cpy.erase(remove(startAt, j), j);
			for(int k; k < sizeof(to); k++){
				cpy[startAt + k] = to[k];
				i += to.size();
			}
		}
	}
}

int main(int argc, char **argv) {
	if (argc != 4)
		return (std::cout << "Please enter 3 argc; <file> <occurence to replace> <replace by>" << std::endl, 1);
	std::ifstream file1(argv[1]);
	if (file1.good()){
		std::string str;
		std::string line;
		str.reserve(file1.tellg());
		while (getline(file1, line)){
			str.append(line);
			str.append("\n");
		}
		replace(&str, argv[2], argv[3]);
		std::cout << str;
		file1.close();
	} else return (std::cout << "File " << argv[1] << " do not exist" << std::endl, 1);
	return 0;
}