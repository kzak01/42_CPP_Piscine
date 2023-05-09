/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:36 by kzak              #+#    #+#             */
/*   Updated: 2023/05/09 11:54:24 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	// if (this != &other) {
	// 	this->_input = other.getInput();
	// }
	return *this;
}

void ScalarConverter::convert(const std::string& input) {
	std::string charValue;

	if (input.size() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) {
		charValue = input[0];
		std::cout << "char: " << charValue
			<< "\nint: " << static_cast<int>(charValue[0])
			<< "\nfloat: " << static_cast<float>(charValue[0]) << ".0f"
			<< "\ndouble: " << static_cast<float>(charValue[0]) << ".0" << std::endl;
		return ;
	}

	// int intValue;
	// float floatValue;
	// double doubleValue;
}
