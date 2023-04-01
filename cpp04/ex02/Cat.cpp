/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:39:24 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 18:58:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " constructor called " << "\033[0m" <<std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat &other) {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

Cat::~Cat() {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " desctructor called" << "\033[0m" << std::endl;
	delete(_brain);
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "\033[1;33m" << "Cat   : " << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Cat::makeSound() const {
	std::cout << "\033[1;33m" << "Cat   : " << _type << ": Miaawww!!!" << "\033[0m" << std::endl;
}
