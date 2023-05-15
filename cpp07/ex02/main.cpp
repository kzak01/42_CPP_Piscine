/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:26:02 by kzak              #+#    #+#             */
/*   Updated: 2023/05/15 16:41:30 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	// Testing default constructor
	Array<int> arr1;
	std::cout << "arr1 size: " << arr1.size() << std::endl;

	// Testing constructor with parameter
	Array<double> arr2(5);
	std::cout << "arr2 size: " << arr2.size() << std::endl;

	// Testing subscript operator
	for (unsigned int i = 0; i < arr2.size(); ++i) {
		arr2[i] = 0.5 * (i + 1);
		std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;
	}

	// Testing out of bounds exception
	try {
		std::cout << "arr2[10]: " << arr2[10] << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	// Testing copy constructor and assignment operator
	Array<int> arr3 = arr1;
	Array<int> arr4;
	arr4 = arr3;

	// Modifying arr3 and arr4 should not affect each other
	arr3[0] = 10;
	std::cout << "arr3[0]: " << arr3[0] << std::endl;
	std::cout << "qui" << std::endl;
	std::cout << "arr4[0]: " << arr4[0] << std::endl;

	return 0;
}
