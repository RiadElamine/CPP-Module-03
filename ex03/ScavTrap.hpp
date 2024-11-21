/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 04:51:51 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 12:07:46 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap& c);
		ScavTrap& operator=(const ScavTrap& c);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

