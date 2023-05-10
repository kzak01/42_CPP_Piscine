/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:33 by kzak              #+#    #+#             */
/*   Updated: 2023/05/10 14:45:53 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#define ERROR "\033[1;31mUsage: ./convert + char || int || float || double\033[0m"

int main(int argc, char** argv) {
	// error to many argument
	if (argc != 2) {
		std::cout << ERROR << std::endl;
		return(1);
	}

	// input == nan, nanf, +inf, -inf, +inff, -inff
	std::string input = argv[1];
	for(int i = 0; i < 6; i++) {
		if (input == special[i]) {
			ScalarConverter::convert(input);
			return(1);
		}
	}

	// error input is a string and not a char
	if (input.length() > 1) {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isdigit(input[0])) {
				std::cout << ERROR << std::endl;
				return(1);
			}
		}
	}

	// convert
	ScalarConverter::convert(input);

	return 0;
}
