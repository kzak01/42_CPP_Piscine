/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:39:28 by kzak              #+#    #+#             */
/*   Updated: 2023/04/01 22:00:08 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default") {}

Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++) {
		this->_inventory[i] = NULL;
	}
	// std::cout << "\033[34m" << "Character: " << this->_name << " name constructor called" << "\033[0m" << std::endl;
}

Character::Character(Character const &other) : _name(other._name) {
	*this = other;
	// std::cout << "\033[34m" << "Character: " << this->_name << " copy constructor called" << "\033[0m" << std::endl;
}

Character& Character::operator=(Character const &other) {
	if (this != &other) {
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = other._inventory[i];
	}
	return *this;
}

Character::~Character() {
	// std::cout << "\033[34m" << "Character: " << this->_name << " desctructor called" << "\033[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			// std::cout << "\033[34m" << "Character " << this->_name << " equipped with " << m->getType() << "\033[0m" << std::endl;
			return;
		}
	// std::cout << "\033[34m" << "Character " << this->_name << " can't equip " << m->getType() << "\033[0m" << std::endl;
}

void	Character::unequip(int idx) {
	if (this->_inventory[idx]) {
		delete this->_inventory[idx];
		this->_inventory[idx] = NULL;
		// std::cout << "\033[34m" << "Character " << this->_name << " unequip slot " << idx << "\033[0m" << std::endl;
	}
	// else
		// std::cout << "\033[34m" << "Character " << this->_name << " can't unequip slot " << idx << "\033[0m" << std::endl;
}

void	Character::use(int idx, ICharacter &target) {
	if (this->_inventory[idx]) {
		this->_inventory[idx]->use(target);
		// std::cout << "\033[34m" << "Character " << this->_name << " uses " << this->_inventory[idx]->getType() << "\033[0m" << std::endl;
	}
	// else
		// std::cout << "\033[34m" << "Character " << this->_name << " can't use" << "\033[0m" << std::endl;
}

std::string const& Character::getName() const {
	return this->_name;
}
