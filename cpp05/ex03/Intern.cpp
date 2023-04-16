/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:24:33 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 16:56:47 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
# include <string>
# include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const {

	std::string	name[] = {
		"shrubbery request",
		"robotomy request",
		"presidential request"
	};
	int i = 0;
	while (!name[i].empty()) {
		if (name[i] == formName)
			break;
		i++;
	}

	AForm* form = nullptr;
	try {
		switch (i) {
			case 0:
				form = new Shrubbery(target);
				break;
			case 1:
				form = new Robotomy(target);
				break;
			case 2:
				form = new President(target);
				break;
			default:
				throw FormDoesNotExistException();
				break;
		}
	} catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	if (form)
		std::cout << "Intern creates " << formName << std::endl;
	return form;
}

const char* Intern::FormDoesNotExistException::what() const throw() {
	return "\033[0;31mIntern: Form does not exist\033[0m";
}
