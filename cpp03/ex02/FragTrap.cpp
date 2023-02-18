/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:11:37 by kzak              #+#    #+#             */
/*   Updated: 2023/02/18 18:28:20 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hp = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "\033[1;33m" <<  "F>> A new FragTrap named " << _name << " has been created!" << "\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "\033[1;33m" <<  "F>> FragTrap " << this->_name << " copied!" << "\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;33m" <<  "F>> The FragTrap named " << _name << " has been destroyed!" << "\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	_name = other._name;
	_hp = other._hp;
	_energy = other._energy;
	_attack = other._attack;
	std::cout << "\033[1;33m" <<  "F>> FragTrap " << _name << " assigned!" << "\033[0m" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "\033[1;33m" << "Gimme five!" << "\033[0m" << std::endl;
}
