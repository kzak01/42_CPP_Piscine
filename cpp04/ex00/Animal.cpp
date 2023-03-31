/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:55:10 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:44:28 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << _type << " default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << _type << " type constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << _type << " copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << _type << " copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

Animal::~Animal() {
	std::cout << _type << " desctructor called" << std::endl;
}

void	Animal::makeSound() const {
	std::cout << _type << " generic sound" << std::endl;
}

std::string	Animal::getType() const {
	return this->_type;
}
