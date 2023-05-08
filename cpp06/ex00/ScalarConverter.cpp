/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:36 by kzak              #+#    #+#             */
/*   Updated: 2023/05/08 13:21:12 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter() : _input("null") {}

// ScalarConverter::ScalarConverter(std::string& input) : _input(input) {}

// ScalarConverter::ScalarConverter(const ScalarConverter& other) : _input(other._input) {}

// ScalarConverter::~ScalarConverter() {}

// ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
// 	if (this != &other) {
// 		this->_input = other.getInput();
// 	}
// 	return *this;
// }

// std::string ScalarConverter::getInput() const {
// 	return this->_input;
// }

// int ScalarConverter::getInt() const {
// 	std::istringstream iss(this->getInput());
// 	int value = 0;
// 	iss >> value;
// 	return value;
// }

// float ScalarConverter::getFloat() const {
// 	std::istringstream iss(this->getInput());
// 	float value = 0.0f;
// 	if (!(iss >> std::setiosflags(std::ios::fixed) >> value)) {
// 		std::cout << "Errore" << std::endl;
// 	}
// 	return value;
// }

// std::ostream& operator<<(std::ostream& out, const ScalarConverter& input) {
// 	out << "Input: " << input.getInput() << "\n";
// 	return out;
// }

void ScalarConverter::convert(const std::string& input) {

	char charValue;
	if (input.size() == 1 && std::isprint(input[0]) && input[0] != '0') {
		charValue = input[0];
		std::cout << "char: " << charValue << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}

	int intValue = std::atoi(input.c_str());
	if (intValue != 0 || input == "0") {
		std::cout << "int: " << intValue << std::endl;
	} else {
		std::cout << "int: impossible" << std::endl;
	}

	float floatValue = std::strtof(input.c_str(), NULL);
	if (floatValue != 0.0f || input == "0.0f") {
		if (input == "-inff" || input == "+inff" || input == "nanf") {
			if (input[0] == '-') {
				floatValue = -std::numeric_limits<float>::infinity();
			} else if (input == "nanf") {
				floatValue = std::numeric_limits<float>::quiet_NaN();
			} else {
				floatValue = std::numeric_limits<float>::infinity();
			}
			std::cout << "float: " << floatValue << "f" << std::endl;
		} else {
			std::cout << "float: " << floatValue << "f" << std::endl;
		}
	} else {
		std::cout << "float: impossible" << std::endl;
	}
}
