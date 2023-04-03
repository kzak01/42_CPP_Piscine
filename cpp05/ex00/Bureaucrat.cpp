/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:32:11 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:54:24 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(1) {
	// std::cout << "Default: " << _name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	// std::cout << "Default: " << _name << " initialize constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	// std::cout << "Default: " << _name << " copy constructor called" << std::endl;
	this->_name = other._name;
	this->_grade = other._grade;
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Default: " << _name << " desctructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	// std::cout << "Default: " << _name << " copy cnstructor called" << std::endl;
	if (this != &other) {
		this->_grade = other.getGrade();
		this->_name = other.getName();
	}
	return *this;
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int			Bureaucrat::getGrade() const {
	return this->_grade;
}

Bureaucrat	Bureaucrat::GradeTooHighException() {
	
}
