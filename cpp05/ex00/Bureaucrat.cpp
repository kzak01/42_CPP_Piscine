/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:32:11 by kzak              #+#    #+#             */
/*   Updated: 2023/04/14 16:51:22 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150) {
	// std::cout << "Bureaucrat: " << _name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	// std::cout << "Bureaucrat: " << _name << " initialize constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) :
						_name(other._name), _grade(other._grade) {
	// std::cout << "Bureaucrat: " << _name << " copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "Bureaucrat: " << _name << " desctructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {
	// std::cout << "Bureaucrat: " << _name << " copy cnstructor called" << std::endl;
	if (this != &other) {
		this->_grade = other.getGrade();
	}
	return *this;
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int			Bureaucrat::getGrade() const {
	return this->_grade;
}

void		Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "\033[0;31mGrade is too high\033[0m";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "\033[0;31mGrade is too low\033[0m";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucra) {
	out << bureaucra.getName() << ", bureaucrat grade " << bureaucra.getGrade();
	return out;
}
