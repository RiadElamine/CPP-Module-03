/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:50:49 by relamine          #+#    #+#             */
/*   Updated: 2025/01/14 11:44:22 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap l("Luffy");
	DiamondTrap t("Teach");

	t.attack("Luffy");
	l.takeDamage(20);
	l.beRepaired(10);
	l.attack("Teach");
	t.takeDamage(20);
	l.highFivesGuys();
	l.guardGate();
	l.whoAmI();
}
