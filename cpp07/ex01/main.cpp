/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:01:40 by kzak              #+#    #+#             */
/*   Updated: 2023/05/17 12:19:20 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	// Lenght = total number of element in byte / one element in byte
	int intArray[] = {1, 3, 6, 7, 9};
	size_t intArrayLenght = sizeof(intArray) / sizeof(intArray[0]);

	char charArray[] = {'a', 'd', 't', 'n', 'c', 'k', 'A'};
	size_t charArrayLenght = sizeof(charArray) / sizeof(charArray[0]);

	double doubleArray[] = {2.3, 6.32, 3345.134, 45.31, 76.23, 1.64, 45.2, 987.45, 634.34345, 321.123, 123.321};
	size_t doubleArrayLenght = sizeof(doubleArray) / sizeof(doubleArray[0]);

	// Printing int array
	std::cout << "\033[1;33mInt array : \n";
	iter(intArray, intArrayLenght, print_value<int>);
	std::cout << "\033[0m" << std::endl;

	// Printing char array
	std::cout << "\033[1;32mChar array : \n";
	iter(charArray, charArrayLenght, print_value<char>);
	std::cout << "\033[0m" << std::endl;

	// Printing double array
	std::cout << "\033[1;35mDouble array : \n";
	iter(doubleArray, doubleArrayLenght, print_value<double>);
	std::cout << "\033[0m" << std::endl;
	return 0;
}
