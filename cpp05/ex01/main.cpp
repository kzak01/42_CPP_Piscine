/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:32:07 by kzak              #+#    #+#             */
/*   Updated: 2023/04/14 16:59:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	std::cout << "\033[32m" << "\n-----Wrong form-----" << "\033[0m" << std::endl;
	try {
		Form wrong("W1", 0, 150);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[32m" << "\n-----Form, bureaucrat grade to low-----" << "\033[0m" << std::endl;
	try {
		Bureaucrat b1("Valerio", 1);
		Form f1("A1", 50, 50);
		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		// b1.decrementGrade();
		// std::cout << b1 << std::endl;
		// b1.incrementGrade();
		// std::cout << b1 << std::endl;
		b1.signForm(f1);
		// b1.incrementGrade();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\033[32m" << "\n-----Form double signed-----" << "\033[0m" << std::endl;
	try {
		Bureaucrat b2("Lorenzo", 150);
		Form f2("B1", 150, 150);
		std::cout << b2 << std::endl;
		std::cout << f2 << std::endl;
		// b2.incrementGrade();
		// std::cout << b2 << std::endl;
		// b2.decrementGrade();
		// std::cout << b2 << std::endl;
		b2.signForm(f2);
		b2.signForm(f2);
		// b2.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
