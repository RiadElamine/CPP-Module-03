/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:50:51 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 10:08:14 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		unsigned int Hit_points;
		unsigned int Energy_points;
		unsigned int Attack_damage;
		
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& c);
		ClapTrap& operator=(const ClapTrap& c);
		~ClapTrap();
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
