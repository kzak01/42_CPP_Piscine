/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:33 by kzak              #+#    #+#             */
/*   Updated: 2023/05/10 14:23:37 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#define ERROR "\033[1;34mEnter: ./convert + char || int || float || double\033[0m"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << ERROR << std::endl;
		return(1);
	}

	std::string input = argv[1];
	if (input.length() > 1) {
		for (int i = 0; i < input.length(); i++) {
			if (!std::isdigit(input[0])) {
				std::cout << ERROR << std::endl;
				return(1);
			}
		}
	}
	ScalarConverter::convert(input);

	return 0;
}
