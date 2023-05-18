/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:15:55 by kzak              #+#    #+#             */
/*   Updated: 2023/05/18 18:37:54 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	// LIST
	std::list<int>	lst;

	for(int i = 0; i < 10; i++) {
		lst.push_back(i + 1);
	}

	std::cout << "Testing list with a number in the list" << std::endl;
	try {
		if (::easyfind(lst, 1))
			throw FoundException();
		else
			throw NoOccurrenceException();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	//VECTOR
	std::vector<int> vec;

	for(int i = 0; i < 10; i++) {
		vec.push_back(i + 1);
	}

	std::cout << "Testing vector with a wrong number" << std::endl;
	try {
		if (::easyfind(vec, 11))
			throw FoundException();
		else 
			throw NoOccurrenceException();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
