/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:26:02 by kzak              #+#    #+#             */
/*   Updated: 2023/05/16 09:02:21 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	// Testing default constructor
	std::cout << "\n\033[1;32mCreating arr1 and arr2, and printing their sizes.\033[0m" << std::endl;
	Array<int> arr1(1);
	std::cout << "arr1 size: " << arr1.size() << std::endl;

	// Testing constructor with parameter
	Array<double> arr2(5);
	std::cout << "arr2 size: " << arr2.size() << std::endl;

	// Testing subscript operator
	std::cout << "\n\033[1;32mPrinting the elements of arr2, incrementing by 0.5 at each step.\033[0m" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); ++i) {
		arr2[i] = 0.5 * (i + 1);
		std::cout << "arr2[" << i << "]: " << arr2[i] << std::endl;
	}

	// Testing out of bounds exception
	std::cout << "\n\033[1;32mTesting out-of-bounds index by accessing arr2[10].\033[0m" << std::endl;
	try {
		std::cout << "arr2[10]: ";
		std::cout << arr2[10] << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	// Testing copy constructor and assignment operator
	Array<int> arr3 = arr1;
	Array<int> arr4;
	arr4 = arr3;

	// Modifying arr3 and arr4 should not affect each other
	std::cout << "\n\033[1;32mCreating arr3 and arr4 by copying arr1, and changing the value of arr3[0].\033[0m" << std::endl;
	arr3[0] = 10;
	std::cout << "arr3[0]: " << arr3[0] << std::endl;
	std::cout << "arr4[0]: " << arr4[0] << std::endl;

	// Array<int> arr1(1);
	// arr1[0] = 10;
	// Array<int> arr2 = arr1;

	// arr2[0] = 20;
	// std::cout << "arr1: " << arr1[0] << "\narr2: " << arr2[0] << std::endl;

	return 0;
}
