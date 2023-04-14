/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:42:17 by kzak              #+#    #+#             */
/*   Updated: 2023/04/14 14:47:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
		_name("1A"), _signed(false), _gradeToSign(150),
		_gradeToExecute(150) {
	// std::cout << "Form: " << _name << " constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
		_name(name), _signed(false), _gradeToSign(gradeToSign),
		_gradeToExecute(gradeToExecute) {
	// std::cout << "Form: " << _name << " initialize constructor called" << std::endl;
}

Form::Form(const Form& other) :
		_name(other._name), _signed(other._signed),
		_gradeToSign(other._gradeToSign),
		_gradeToExecute(other._gradeToExecute) {
	// std::cout << "Form: " << _name << " copy constructor called" << std::endl;
}

Form::~Form() {
	// std::cout << "Form: " << _name << " desctructor called" << std::endl;
}

Form&	Form::operator=(const Form& other) {
	// std::cout << "Form: " << _name << " copy constructor called" << std::endl;
	if (this != &other) {
		this->_signed = other.getSigned();
	}
	return *this;
}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getSigned() const {
	return this->_signed;
}

int		Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int		Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "\033[0;31mGrade is too high\033[0m";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "\033[0;31mGrade is too low\033[0m";
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << ", is signed? " << form.getSigned()
		<< ", grade to signed required " << form.getGradeToSign()
		<< ", grade to execute required " << form.getGradeToExecute();
}
