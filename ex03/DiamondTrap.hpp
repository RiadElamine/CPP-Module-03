/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:45:01 by relamine          #+#    #+#             */
/*   Updated: 2025/01/14 11:05:03 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap  : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public :
		DiamondTrap();
		DiamondTrap(std::string Name);
		DiamondTrap(const DiamondTrap& c);
		DiamondTrap& operator=(const DiamondTrap& c);
		~DiamondTrap();
		void attack(const std::string& target);
		void whoAmI();
};