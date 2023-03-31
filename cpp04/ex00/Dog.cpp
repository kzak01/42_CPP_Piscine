/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:05:52 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:44:07 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[34m" << _type << " constructor called " << "\033[0m" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << "\033[34m" << _type << " type constructor called" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "\033[34m" << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "\033[34m" << _type << " desctructor called" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "\033[34m" << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "\033[34m" << _type << ": Baauuuu Baauuu!!!" << "\033[0m" << std::endl;
}

