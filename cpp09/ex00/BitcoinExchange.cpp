/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:26:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/23 14:30:29 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {
	std::ifstream data("data.csv");
	std::string line = "";

	while (std::getline(data, line)) {
		if (line != "date,exchange_rate") {
			float number = 0.0;
			size_t commaIndex = line.find(',');
			std::string numberStr = line.substr(commaIndex + 1, line.size());
			std::istringstream iss(numberStr);
			iss >> number;
			_data[line.substr(0, commaIndex)] = number;
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

int is_number(const std::string& s) {
	int i = 0;
	if (s[i] == ' ' || s[i] == '-')
		i++;
	if (s[i] == '-' && s[i - 1] != '-')
		i++;
	while (s[i]) {
		if (!isdigit(s[i]) && s[i] != '.')
			return 1;
		i++;
	}
	return 0;
}

bool check_line(std::string line) {
	if (line.size() < 12) {
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	float number = 0.0;
	size_t pipeIndex = line.find("|");
	if (pipeIndex >= line.size()) {
		std::cout << "Error: no pipe => " << line << std::endl;
		return false;
	}

	std::string numberStr = line.substr(pipeIndex + 1, line.size());
	if (!is_number(numberStr)) {
		std::istringstream iss(numberStr);
		iss >> number;
	} else {
		std::cout << "Error: no valid value => " << line << std::endl;
		return false;
	}
	
	return true;
}

void check_convert(std::string line) {
	if (line != "date | value") {
		if (check_line(line))
			return;
		
	}
}

int Bitcoin::bitExchange(char* argv) {
	std::ifstream input(argv);
	if (!input.good()) {
		std::cerr << "\033[0;31mError: could not open file.\033[0m" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(input, line)) {
		check_convert(line);
	}
	input.close();
	return 0;
}
