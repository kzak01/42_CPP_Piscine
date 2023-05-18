/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:41:13 by kzak              #+#    #+#             */
/*   Updated: 2023/05/18 22:21:39 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	// Subject main
	std::cout << "\n\033[0;32mSubject main\033[0m" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.printVector();
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest spam: "<< sp.longestSpan() << std::endl;

	// Test big number + Error
	std::cout << "\n\033[0;32mTest addNumber + error\033[0m" << std::endl;
	try {
		std::vector<int> vec(15000);
		std::srand(static_cast<unsigned>(time(0)));
		std::generate(vec.begin(), vec.end(), std::rand);

		Span test(vec.size());

		test.addNumbers(vec.begin(), vec.end());
		test.printVector();
		std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		std::cout << "Longest span: " << test.longestSpan() << std::endl;
		test.addNumber(42);
	} catch (std::exception &e) {
		std::cerr << "\033[0;31m" << e.what() << "\033[0m" << std::endl;
	}

	return 0;
}
