/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:50:49 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 12:58:25 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap l("Luffy");
	FragTrap t("Teach");

	t.attack("Luffy");
	l.takeDamage(20);
	l.beRepaired(10);
	l.attack("Teach");
	t.takeDamage(20);
	l.highFivesGuys();
}
