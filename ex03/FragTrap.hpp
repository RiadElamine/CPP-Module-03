/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 07:24:40 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 12:07:34 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap& c);
		FragTrap& operator=(const FragTrap& c);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};
