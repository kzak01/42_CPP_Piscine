/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:26:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/24 13:08:51 by kzak             ###   ########.fr       */
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
			std::string numberStr = line.substr(commaIndex + 1);
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

bool	check_data(std::string data) {
	if (data.size() < 13) {
		return false;
	}
	for (int i =0; data[i]; i++) {
		if (!isdigit(data[i]) && (i <= 3 || i == 5 || i == 6 || i == 8 || i == 9))
			return false;
		if (data[i] != '-' && (i == 4 || i == 7))
			return false;
		if (data[i] != ' ' && (i == 10 || i == 12))
			return false;
		if (data[i] != '|' && i == 11)
			return false;
	}
	return true;
}

bool check_time(std::string data) {
	std::string year = data.substr(0, 4);
	std::string month = data.substr(5, 2);
	std::string day = data.substr(8, 2);

	int yearI , monthI, dayI;
	std::istringstream(year) >> yearI;
	std::istringstream(month) >> monthI;
	std::istringstream(day) >> dayI;

	if (yearI > 2022 || yearI < 2009)
		return false;
	if (monthI > 12 || monthI < 1)
		return false;
	if (dayI > 31 || dayI < 1)
		return false;
	return true;
}

bool	check_value(std::string value) {
	int dot = 0;

	for (int i = 0; i < value.size(); i++) {
		if (!isdigit(value[i]) && value[i] != '.')
			return false;
		if (value[i] == '.')
			dot++;
		else if (dot > 1)
			return false;
	}
	return true;
}

bool check_error(std::string line) {
	if (!check_data(line)) {
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}

	float number = 0.0;
	std::string dataLine = line.substr(0, 10);
	std::string numberStr = line.substr(13, line.size() - 13);

	if (!check_time(dataLine)) {
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	if (!check_value(numberStr)) {
		std::cout << "Error: not a positive number" << line << std::endl;
		return false;
	}
	return true;
}

void check_convert(std::string line) {
	if (line != "date | value") {
		if (!check_error(line))
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
