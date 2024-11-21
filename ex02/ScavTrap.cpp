/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 04:51:43 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 12:56:55 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
	std::cout << "ScavTrap \"" << Name << "\" is born" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& c)
{
	*this = c;
	std::cout << "ScavTrap \"" << this->Name << "\" is born" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c)
{
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "Copy of ScavTrap \"" << this->Name << "\" is born" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap \"" << this->Name << "\" leaves" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!this->Energy_points || !this->Hit_points)
		return ;
	this->Energy_points--;
	std::cout << "ScavTrap \"" << this->Name
		<< "\" attacks \"" << target
		<<"\", causing " << this->Attack_damage
		<<" points of damage!" 
		<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap \"" << this->Name << "\" is now in Gate keeper mode  🛡️" << std::endl;
}
