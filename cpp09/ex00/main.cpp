/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:26:56 by kzak              #+#    #+#             */
/*   Updated: 2023/05/28 10:20:48 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "\033[0;31mError: No file specified\033[0m" << std::endl;
		return 1;
	}
	Bitcoin bit;
	return bit.bitExchange(argv[1]);
}
