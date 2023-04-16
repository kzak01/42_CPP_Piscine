/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:47:45 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 17:01:28 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	// Create bureaucrats
	Bureaucrat michela("Michela", 45);
	Bureaucrat lorenzo("Lorenzo", 5);

	// Create forms
	Shrubbery shrubbery("garden");
	Robotomy robotomy("human");
	President pardon("criminal");

	std::cout << "\033[32m" << "\n-----Initial state of the form and bureaucrats-----" << "\033[0m" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;
	std::cout << michela << std::endl;
	std::cout << lorenzo << std::endl;

	try {
		std::cout << "\033[32m" << "\n-----Michela tries to sign the forms-----" << "\033[0m" << std::endl;
		michela.signForm(shrubbery);
		michela.signForm(robotomy);
		michela.signForm(pardon);

		std::cout << "\033[32m" << "\n-----Lorenzo signs the rest of the forms-----" << "\033[0m" << std::endl;
		lorenzo.signForm(shrubbery);
		lorenzo.signForm(robotomy);
		lorenzo.signForm(pardon);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m" << "\n-----Print the forms after being signed-----" << "\033[0m" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;

	try {
		std::cout << "\033[32m" << "\n-----Michela tries to execute the forms-----" << "\033[0m" << std::endl;
		michela.executeForm(shrubbery);
		michela.executeForm(robotomy);
		michela.executeForm(pardon);

		std::cout << "\033[32m" << "\n-----Lorenzo executes the forms-----" << "\033[0m" << std::endl;
		lorenzo.executeForm(shrubbery);
		lorenzo.executeForm(robotomy);
		lorenzo.executeForm(pardon);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m" << "\n-----Print the final state of the forms and bureaucrats-----" << "\033[0m" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;
	std::cout << lorenzo << std::endl;
	std::cout << michela << std::endl;

	return 0;
}
