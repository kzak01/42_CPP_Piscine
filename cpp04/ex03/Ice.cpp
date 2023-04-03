/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:49:51 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:35:24 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	// std::cout << "\033[96m" << "Ice: default constructor called" << "\033[0m" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria("ice") {
	// std::cout << "\033[96m" << "Ice: copy constructor called" << "\033[0m" << std::endl;
	*this = other;
}

Ice::~Ice() {
	// std::cout << "\033[96m" << "Ice: desctructor called" << "\033[0m" << std::endl;
}

Ice	&Ice::operator=(const Ice &other) {
	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

AMateria	*Ice::clone() const {
	return (new Ice(*this));
}

void	Ice::use( ICharacter &target ) {
	std::cout << "\033[96m" << "* shoots an ice bolt at " << target.getName() << " *" << "\033[0m" << std::endl;
}
