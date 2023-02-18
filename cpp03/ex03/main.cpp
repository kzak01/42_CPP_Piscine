/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:30:35 by kzak              #+#    #+#             */
/*   Updated: 2023/02/18 19:13:55 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamond("Kenny");

	diamond.whoAmI();
	diamond.attack("Cartman");
	diamond.takeDamage(50);
	diamond.beRepaired(20);
	diamond.guardGate();
	diamond.highFivesGuys();

	return 0;
}

// int main() {
// 	ScavTrap *c1 = new ScavTrap();
// 	DiamondTrap *c2 = new DiamondTrap("Zoro");
// 	DiamondTrap *aux = new DiamondTrap();
// 	DiamondTrap *c3 = new DiamondTrap(*aux);

// 	std::cout << std::endl;

// 	c1->attack("Slime");
// 	c2->attack("Sanji");
// 	c3->attack("Slime shiny");

// 	std::cout << std::endl;

// 	c1->takeDamage(80);
// 	c2->takeDamage(50);
// 	c2->takeDamage(50);
// 	c3->takeDamage(5);

// 	std::cout << std::endl;

// 	c1->beRepaired(1000);
// 	c2->beRepaired(1);
// 	c3->beRepaired(5);

// 	std::cout << std::endl;

// 	c1->guardGate();

// 	c2->guardGate();
// 	c3->guardGate();

// 	c2->highFivesGuys();
// 	c3->highFivesGuys();

// 	c2->whoAmI();
// 	c3->whoAmI();

// 	std::cout << std::endl;

// 	delete c1;
// 	delete c2;
// 	delete aux;
// 	delete c3;
// }
