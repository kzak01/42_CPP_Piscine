/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:19:12 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:28:49 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "\033[1;31m" << _type << " constructor called " << "\033[0m" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "\033[1;31m" << type << " type constructor called" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "\033[1;31m" << _type << " copy costructor called" << "\033[0m" << std::endl;
	*this = other;
}

WrongCat::~WrongCat() {
	std::cout << "\033[1;31m" << _type << " desctructor called" << "\033[0m" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "\033[1;31m" << _type << " copy assignment operator called" << "\033[0m" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return *this;
}

void	WrongCat::makeSound() const {
	std::cout << "\033[1;31m" << _type << ": Miaawww!!!" << "\033[0m" << std::endl;
}
