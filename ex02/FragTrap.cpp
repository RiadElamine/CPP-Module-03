/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 07:24:36 by relamine          #+#    #+#             */
/*   Updated: 2025/01/14 11:23:37 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_FragTrap")
{
	this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
	std::cout << "FragTrap \"" << Name << "\" is born" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
	std::cout << "Parameterized Constructor FragTrap \"" << Name << "\" is born" << std::endl;
}

FragTrap::FragTrap(const FragTrap& c)
{
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "Copy Constructor of FragTrap \"" << this->Name << "\" is born" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& c)
{
	this->Name = c.Name;
	this->Hit_points = c.Hit_points;
	this->Energy_points = c.Energy_points;
	this->Attack_damage = c.Attack_damage;
	std::cout << "Copy assignment Operator of FragTrap \"" << this->Name << "\" is born" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap \"" << this->Name << "\" leaves" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (!this->Energy_points || !this->Hit_points)
		return ;
	this->Energy_points--;
	std::cout << "FragTrap \"" << this->Name
		<< "\" attacks \"" << target
		<<"\", causing " << this->Attack_damage
		<<" points of damage!" 
		<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (!this->Energy_points || !this->Hit_points)
		return ;
	std::cout << "FragTrap \"" << this->Name << "\" says: \"Who's ready for a high five 🙌\"\n";
}