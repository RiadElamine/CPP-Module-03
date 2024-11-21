/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 02:50:49 by relamine          #+#    #+#             */
/*   Updated: 2024/11/21 04:40:34 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap l("Monkey D. Luffy");
	ClapTrap t("Marshall D. Teach");

	t.attack("Monkey D. Luffy");
	l.takeDamage(5);
	l.beRepaired(4);
	l.attack("Marshall D. Teach");
	t.takeDamage(10);
}
