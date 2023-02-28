/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:25:25 by kzak              #+#    #+#             */
/*   Updated: 2023/02/28 14:41:33 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name) {
	_hp = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "\033[1;31m" << _name << ">> A new ScavTrap named " << _name << " has been created!" << "\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "\033[1;31m" << _name << ">> ScavTrap " << this->_name << " copied!" << "\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;31m" << _name << ">> The ScavTrap named " << _name << " has been destroyed!" << "\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	std::cout << "\033[1;31m" << _name << ">> ScavTrap " << _name << " assigned!" << "\033[0m" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) const
{
	if (_energy < 1) {
		std::cout << "\033[1;31m" << _name << ">> ScavTrap " << _name << " has no energy left to attack!" << "\033[0m" << std::endl;
		return;
	}
	std::cout << "\033[1;31m" << _name << ">> ScavTrap " << _name << " attacks " << target << " for " << _attack << " points of damage!" << "\033[0m" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "\033[1;31m" << _name << ">> ScavTrap " << _name << " is now in Gate keeper mode." << "\033[0m" << std::endl;
}
