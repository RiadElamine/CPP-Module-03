/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:50:49 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 07:18:00 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap l("Monkey D. Luffy");
	ScavTrap t("Marshall D. Teach");

	t.attack("Monkey D. Luffy");
	l.takeDamage(20);
	l.beRepaired(10);
	l.attack("Marshall D. Teach");
	t.takeDamage(20);
}
