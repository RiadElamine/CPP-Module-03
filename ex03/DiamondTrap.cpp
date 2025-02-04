/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 09:44:58 by relamine          #+#    #+#             */
/*   Updated: 2025/01/14 11:42:27 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap_clap_name")
{
	this->_name = "DiamondTrap";
	this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name") , FragTrap(Name), ScavTrap(Name)
{
	this->_name = Name;
	this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
	std::cout << "DiamondTrap \"" << Name << "\" is born" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& c)
{
	this->_name = c._name;
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "DiamondTrap \"" << this->_name << "\" is born" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& c)
{
	this->_name = c._name;
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "Copy of DiamondTrap \"" << this->_name << "\" is born" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap \"" << this->_name << "\" leaves" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (!this->Energy_points || !this->Hit_points)
		return ;
	std::cout << "DiamondTrap private name \"" << this->_name << "\" and he has ClapTrap name \""
		 << this->Name << "\"" << std::endl;
}
