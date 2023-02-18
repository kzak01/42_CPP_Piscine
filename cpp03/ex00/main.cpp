/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:42:45 by kzak              #+#    #+#             */
/*   Updated: 2023/02/18 17:22:44 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("Clappy");

	clapTrap.attack("enemy");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(3);

	ClapTrap clapTrap2 = clapTrap;
	clapTrap2.attack("enemy");
	clapTrap2.takeDamage(2);
	clapTrap2.beRepaired(1);

	ClapTrap clapTrap3("Another ClapTrap");
	clapTrap3.attack("enemy");
	clapTrap3.takeDamage(4);
	clapTrap3.beRepaired(2);

	return 0;
}
