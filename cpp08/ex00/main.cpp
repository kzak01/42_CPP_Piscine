/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:15:55 by kzak              #+#    #+#             */
/*   Updated: 2023/05/16 11:24:55 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::list<int>	lst;

	for(int i = 0; i < 10; i++) {
		lst.push_back(i + 1);
	}

	std::cout << "Testing with a number in the list" << std::endl;
	try {
		::easyfind(lst, 1);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Testing with a wrong number" << std::endl;
	try {
		::easyfind(lst, 11);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
