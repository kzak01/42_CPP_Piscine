/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:47:45 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 15:52:23 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	// Create bureaucrats
	Bureaucrat jane("Jane", 45);
	Bureaucrat john("John", 5);

	// Create forms
	Shrubbery shrubbery("garden");
	Robotomy robotomy("human");
	President pardon("criminal");

	std::cout << "\033[32m" << "\n-----Initial state of the form and bureaucrats-----" << "\033[0m" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;
	std::cout << jane << std::endl;
	std::cout << john << std::endl;

	try {
		std::cout << "\033[32m" << "\n-----Jane tries to sign the forms-----" << "\033[0m" << std::endl;
		jane.signForm(shrubbery);
		jane.signForm(robotomy);
		jane.signForm(pardon);

		std::cout << "\033[32m" << "\n-----John signs the rest of the forms-----" << "\033[0m" << std::endl;
		john.signForm(shrubbery);
		john.signForm(robotomy);
		john.signForm(pardon);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m" << "\n-----Print the forms after being signed-----" << "\033[0m" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;

	try {
		std::cout << "\033[32m" << "\n-----Jane tries to execute the forms-----" << "\033[0m" << std::endl;
		jane.executeForm(shrubbery);
		jane.executeForm(robotomy);
		jane.executeForm(pardon);

		std::cout << "\033[32m" << "\n-----John executes the forms-----" << "\033[0m" << std::endl;
		john.executeForm(shrubbery);
		john.executeForm(robotomy);
		john.executeForm(pardon);
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\033[32m" << "\n-----Print the final state of the forms and bureaucrats-----" << "\033[0m" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;
	std::cout << john << std::endl;
	std::cout << jane << std::endl;

	return 0;
}
