/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:19:26 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/25 13:07:30 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		std::string	getName(){ return this->_name; }
		void		setName(std::string name) { this->_name = name; }
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif