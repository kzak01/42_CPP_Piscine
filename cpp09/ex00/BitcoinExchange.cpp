/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:26:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/22 16:25:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {
	std::ifstream data("data.csv");
	std::string line;
	size_t len;
	float number;

	while (std::getline(data, line)) {
		if (line != "date,exchange_rate") {
			len = line.find(',');
			std::istringstream(line.substr(len + 1, line.length())) >> number;
			_data[line.substr(0, len)] = number;
		}
	}
	data.close();
}

Bitcoin::Bitcoin(const Bitcoin& other) {
	_data = other._data;
}

Bitcoin& Bitcoin::operator=(const Bitcoin& other) {
	if (this != &other) {
		_data = other._data;
	}
	return *this;
}

Bitcoin::~Bitcoin() {}

int Bitcoin::bitExchange(char* argv) {
	std::ifstream input(argv);
	if (!input.good()) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(input, line)) {
		if (line != "date | value") {

		}
	}
	input.close();
	return 0;
}
