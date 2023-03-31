/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:42:45 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 11:36:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap c1("Clap1");
	c1.attack("Enemy1");
	c1.beRepaired(5);
	c1.takeDamage(15);

	ScavTrap s1("Scav1");
	s1.attack("Enemy1");
	s1.beRepaired(5);
	s1.takeDamage(15);
	s1.guardGate();

	ScavTrap s2(s1);
	s2.attack("Enemy2");
	s2 = s1;
	s2.beRepaired(10);
	s2.guardGate();

	return 0;
}
