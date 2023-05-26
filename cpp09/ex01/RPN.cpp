/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:58:27 by kzak              #+#    #+#             */
/*   Updated: 2023/05/26 12:34:13 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& other) {}

RPN& RPN::operator=(const RPN& other) {}

RPN::~RPN() {}

int RPN::calc(const std::string& expression) {
	std::istringstream iss(expression);
	std::string token;
	// Vector used as a stack to store numbers and intermediate results
	std::vector<int> stack;

	while (iss >> token) {
		if (token == "+" || token == "-" || token == "*" || token == "/") {
			if (stack.size() < 2)
				throw std::runtime_error("Invalid expression");

			// Retrieve the second operand and remove it. Retrieve the first operand and remove it
			int b = stack.back();
			stack.pop_back();
			int a = stack.back();
			stack.pop_back();

			// Perform operation and push the result onto the stack
			if (token == "+")
				stack.push_back(a + b);
			else if (token == "-")
				stack.push_back(a - b);
			else if (token == "*")
				stack.push_back(a * b);
			else if (token == "/") {
				if (b == 0)
					throw std::runtime_error("Division by zero");
				stack.push_back(a / b);
			}
		} else { // Convert token to an integer and push the number onto the stack
			int num = std::atoi(token.c_str());
			// Check if number are less than 10
			if (num > 9 || num < -9)
				throw std::runtime_error("Numbers must be less than 10 || greater than -10");
			stack.push_back(num);
		}
	}

	if (stack.size() != 1)
		throw std::runtime_error("Invalid expression");
	// The final result is the only remaining element in the stack
	return stack[0];
}
