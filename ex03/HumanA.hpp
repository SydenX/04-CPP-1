/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:29:54 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/22 12:09:14 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string type;
	public:
		HumanA(std::string, class Weapon);
		~HumanA();
		void attack();
		Weapon 		Weapon;
		std::string	name;
};

#endif