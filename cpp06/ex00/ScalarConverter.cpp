/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:13:09 by kzak              #+#    #+#             */
/*   Updated: 2023/05/10 15:22:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

std::string special[6] = {
		"nan", "nanf", "+inf", "-inf", "+inff", "-inff"
};


ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	return *this;
}

void ScalarConverter::convert(const std::string& input) {
	std::string charValue;

	if (input.size() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) {
		char_converter(input);
	} else {
		number_converter(input);
	}
}

void ScalarConverter::char_converter(const std::string& input) {
	std::string charValue;

	charValue = input[0];
	std::cout << "char: " << charValue
		<< "\nint: " << static_cast<int>(charValue[0])
		<< "\nfloat: " << static_cast<float>(charValue[0]) << ".0f"
		<< "\ndouble: " << static_cast<double>(charValue[0]) << ".0" << std::endl;
}

void ScalarConverter::number_converter(const std::string& input) {
	std::string charValue = "";
	int intValue = 0;
	float floatValue = 0.0f;
	double doubleValue = 0.0;

	// Check if the number is a float or double with the final f
	if (input[input.length() - 1] == 'f') {
		floatValue = std::atof(input.c_str());
		doubleValue = static_cast<double>(floatValue);
	} else {
		doubleValue = std::atof(input.c_str());
		floatValue = static_cast<float>(doubleValue);
	}

	// Search for special cases (nan, nanf, +inf, -inf, +inff, -inff)
	for (int i = 0; i < 6; i++) {
		if (input == special[i]) {
			charValue = "impossible";
			break;
		}
	}

	// Check if the number is an ASCII printable character
	intValue = std::atoi(input.c_str());
	if (charValue == "" && intValue < 127 && intValue > 31) {
		charValue = "'";
		charValue += static_cast<char>(intValue);
		charValue += "'";
	}
	else if (charValue == "") {
		charValue = "Non displayable";
	}

	// Check if the number is in the range of an int
	std::cout << "char: " << charValue << std::endl;
	if (charValue == "impossible")
		std::cout << "int: impossible" << std::endl;
	else if ((floatValue != 0.0f
			&& floatValue < std::numeric_limits<int>::lowest()
			&& floatValue > std::numeric_limits<int>::max()) ||
			(doubleValue != 0.0
			&& doubleValue > std::numeric_limits<int>::max()
			&& doubleValue < std::numeric_limits<int>::lowest()))
		std::cout << "int: " << intValue << std::endl;
	else
		std::cout << "int: Overflow" << std::endl;

	// Check if the number is in the range of float and double
	if (charValue == "impossible" && floatValue == 0) {
		std::cout << "float: impossible\ndouble: impossible" << std::endl;
	} else {
		if (charValue != "impossible" && floatValue - static_cast<int>(floatValue) == 0) {
			if (floatValue > std::numeric_limits<float>::max() || floatValue < std::numeric_limits<float>::lowest()) {
				std::cout << "float: Overflow" << std::endl;
			} else {
				std::cout << "float: " << floatValue << ".0f" << std::endl;
			}

			if (doubleValue > std::numeric_limits<double>::max() || doubleValue < std::numeric_limits<double>::lowest()) {
				std::cout << "double: Overflow" << std::endl;
			} else {
				std::cout << "double: " << doubleValue << ".0" << std::endl;
			}
		} else {
			std::cout << "float: " << floatValue << "f" << std::endl;
			std::cout << "double: " << doubleValue << std::endl;
		}
	}
}
