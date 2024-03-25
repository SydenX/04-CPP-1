/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:35 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 13:21:02 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace(std::string *str, std::string from, std::string to)
{
	int startAt;
	for(int i = 0; (*str)[i] != 0; i++) {
		unsigned long j = 0;
		while ((*str)[i] == from[j]){
			j++;
			i++;
		}
		if (j == from.size()){
			startAt = i - j;
			(*str).erase(startAt, j);
			(*str).insert(startAt, to);
			i += to.size();
		}
	}
}

std::string charToString(std::string str){ return str; }

int main(int argc, char **argv) {
	if (argc != 4)
		return (std::cout << "Please enter 3 argc; <file> <occurence to replace> <replace by>" << std::endl, 1);
	std::ifstream file1(argv[1]);
	if (file1.good()){
		std::ofstream file2(charToString(argv[1]).append(".replace"));
		if (!file2.good())
			return (std::cout << "Error occured while trying to create output file." << std::endl, 1);
		std::string str;
		std::string line;
		str.reserve(file1.tellg());
		while (getline(file1, line)){
			str.append(line);
			str.append("\n");
		}
		if (str.empty())
			return (std::cout << "File " << argv[1] << " is empty." << std::endl, 1);
		replace(&str, argv[2], argv[3]);
		file2 << str;
		file1.close();
	} else return (std::cout << "File " << argv[1] << " do not exist." << std::endl, 1);
	return 0;
}