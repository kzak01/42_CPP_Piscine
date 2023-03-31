/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:05:52 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 18:59:33 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "\033[34m" << "Dog   : " << _type << " constructor called " << "\033[0m" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &other) {
	std::cout << "\033[34m" << "Dog   : " << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

Dog::~Dog() {
	std::cout << "\033[34m" << "Dog   : " << _type << " desctructor called" << "\033[0m" << std::endl;
	delete(_brain);
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "\033[34m" << "Dog   : " << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Dog::makeSound() const {
	std::cout << "\033[34m" << "Dog   : " << _type << ": Baauuuu Baauuu!!!" << "\033[0m" << std::endl;
}




