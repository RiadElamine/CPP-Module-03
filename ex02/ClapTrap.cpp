/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:50:54 by relamine          #+#    #+#             */
/*   Updated: 2025/01/13 06:28:28 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->Name = "ClapTrap";
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "ClapTrap \"" << Name << "\" is born" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	this->Name = Name;
	this->Hit_points = 10;
	this->Energy_points = 10;
	this->Attack_damage = 0;
	std::cout << "Parameterized Constructor ClapTrap \"" << Name << "\" is born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "Copy Constructor of ClapTrap \"" << Name << "\" is born" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "Copy assignment Operator of ClapTrap \"" << Name << "\" is born" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap \"" << Name << "\" leaves" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->Energy_points || !this->Hit_points)
		return ;
	this->Energy_points--;
	std::cout << "ClapTrap \"" << this->Name
		<< "\" attacks \"" << target
		<<"\" , causing " << this->Attack_damage
		<<" points of damage!" 
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->Hit_points)
		this->Hit_points = 0;
	else
		this->Hit_points -= amount;
	std::cout << "ClapTrap \"" << this->Name
		<< "\" lose " << amount << " hit points"
		<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->Energy_points || !this->Hit_points)
		return ;
	this->Hit_points += amount;
	this->Energy_points--;
	std::cout << "ClapTrap \"" << this->Name
		<< "\" gets " << amount << " hit points back"
		<< std::endl;
}
