/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapom.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:30:10 by jtollena          #+#    #+#             */
/*   Updated: 2024/03/21 14:33:14 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		const &std::string getType();
		setType(std::string newtype);
}

#endif