/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoitExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:26:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/22 12:00:52 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {}

Bitcoin::Bitcoin(std::ifstream data) {
	std::string line;
	char delimiter = ',';
	while (std::getline(data, line)) {

	}
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
