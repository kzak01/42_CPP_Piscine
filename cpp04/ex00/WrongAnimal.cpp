/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:17:50 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:29:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "\033[1;31m" << "WrongAnimal default constructor called" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "\033[1;31m" << "WrongAnimal type constructor called" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "\033[1;31m" << "WrongAnimal copy constructor called" << "\033[0m" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	std::cout << "\033[1;31m" << "WrongAnimal copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\033[1;31m" << "Animal desctructor called" << "\033[0m" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "\033[1;31m" << _type << " generic sound" << "\033[0m" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->_type;
}
