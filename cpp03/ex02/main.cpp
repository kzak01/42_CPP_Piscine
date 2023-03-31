/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:30:35 by kzak              #+#    #+#             */
/*   Updated: 2023/02/28 15:03:08 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	// Create a ClapTrap
	ClapTrap clapTrap("Clappy");
	clapTrap.attack("enemy");
	clapTrap.takeDamage(50);
	clapTrap.beRepaired(30);

	// Create a ScavTrap
	ScavTrap scavTrap("Scavvy");
	scavTrap.attack("enemy");
	scavTrap.takeDamage(50);
	scavTrap.beRepaired(30);
	scavTrap.guardGate();

	// Create a FragTrap
	FragTrap fragTrap("Fraggy");
	fragTrap.attack("enemy");
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.highFivesGuys();

	return 0;
}
