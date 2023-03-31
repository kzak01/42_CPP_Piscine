/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:30:06 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 19:04:37 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other;
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy costructor called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}
