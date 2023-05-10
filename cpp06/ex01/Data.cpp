/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:19:06 by kzak              #+#    #+#             */
/*   Updated: 2023/05/10 16:27:28 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _value(0) {}

Data::Data(int value) : _value(value) {}

Data::Data(const Data& other) : _value(other._value) {}

Data::~Data() {}

Data& Data::operator=(const Data& other) {
	if (this != &other)
		this->_value = other.getValue();
	return *this;
}

int Data::getValue() const {
	return this->_value;
}
