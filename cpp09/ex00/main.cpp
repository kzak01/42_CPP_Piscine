/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:26:56 by kzak              #+#    #+#             */
/*   Updated: 2023/05/22 11:22:31 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// negativo, data non va bene, nemero "largo". Dopo

// formato data | value, data anno-mese-giorno

int main(int argc, char** argv) {
	(void)argc;
	std::ifstream inputFile(argv[1]);
	std::ifstream dataFile("./data.csv");
	if (!inputFile.good() || !dataFile.good()) {
		std::cerr << "\033[1;31mError: could not open file.\033[0m" << std::endl;
		return 1;
	}
	
	return 0;
}
