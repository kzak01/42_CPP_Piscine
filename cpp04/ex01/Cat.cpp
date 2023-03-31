/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:39:24 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:44:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[1;33m" << _type << " constructor called " << "\033[0m" <<std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
	std::cout << "\033[1;33m" << _type << " type constructor called" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &other) {
	std::cout << "\033[1;33m" << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

Cat::~Cat() {
	std::cout << "\033[1;33m" << _type << " desctructor called" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "\033[1;33m" << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "\033[1;33m" << _type << ": Miaawww!!!" << "\033[0m" << std::endl;
}
