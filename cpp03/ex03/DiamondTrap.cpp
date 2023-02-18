/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:40:59 by kzak              #+#    #+#             */
/*   Updated: 2023/02/18 19:14:55 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() {
	this->_name = "DiamondTrap";
	this->ClapTrap::_name = std::string("DiamondTrap").append("_clap_name");
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_hp = this->FragTrap::_hp;
	this->_energy = this->ScavTrap::_energy;
	this->_attack = this->FragTrap::_attack;
	std::cout << "\033[34m" <<  "D>> A new DiamondTrap named " << _name << " has been created!" << "\033[0m" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) {
	*this = other;

	std::cout << "\033[34m" <<  "D>> DiamondTrap " << this->_name << " copied!" << "\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\033[34m" <<  "D>> The DiamondTrap named " << _name << " has been destroyed!" << "\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other) {
		ClapTrap::operator=(other);
		this->_name = other._name;
	}
	std::cout << "\033[34m" <<  "D>> DiamondTrap " << _name << " assigned!" << "\033[0m" << std::endl;
	return *this;
}


void DiamondTrap::attack(const std::string& target) const {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
	std::cout << "\033[34m" << "I am " << this->_name << ", my ClapTrap name is " << this->ClapTrap::_name << "\033[0m" << std::endl;
}
