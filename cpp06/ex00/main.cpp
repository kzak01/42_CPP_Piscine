/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:33 by kzak              #+#    #+#             */
/*   Updated: 2023/05/08 13:15:56 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "\033[1;34mEnter one: char || int || float || double\033[0m" << std::endl;
		return(1);
	}

	std::string input = argv[1];
	// std::cout << "argv[1]: " << input << std::endl;

	ScalarConverter::convert(input);

	return 0;

}
