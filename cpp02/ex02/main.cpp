/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:24:12 by kzak              #+#    #+#             */
/*   Updated: 2023/02/17 18:12:20 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// int main( void )
// {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;

// return 0;
// }

int main(void) {

	Fixed a(42.42f);
	Fixed b(21.21f);
	Fixed c;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	// test operator+
	c = a + b;
	std::cout << "a + b = " << c << std::endl;

	// test operator-
	c = a - b;
	std::cout << "a - b = " << c << std::endl;

	// test operator*
	c = a * b;
	std::cout << "a * b = " << c << std::endl;

	// test operator/
	c = a / b;
	std::cout << "a / b = " << c << std::endl;

	// test operator>   1 if a >, 0 if b >
	bool gt = (a > b);
	std::cout << "a > b ? " << gt << std::endl;

	// test operator>=
	bool gte = (a >= b);
	std::cout << "a >= b ? " << gte << std::endl;

	// test operator<
	bool lt = (a < b);
	std::cout << "a < b ? " << lt << std::endl;

	// test operator<=
	bool lte = (a <= b);
	std::cout << "a <= b ? " << lte << std::endl;

	// test operator==
	bool eq = (a == b);
	std::cout << "a == b ? " << eq << std::endl;

	// test operator!=
	bool neq = (a != b);
	std::cout << "a != b ? " << neq << std::endl;

	// test operator++
	std::cout << "a pre-increment: " << a << std::endl;
	std::cout << "a after pre-increment: " << ++a << std::endl;
	std::cout << "a post-increment: " << a++ << std::endl;
	std::cout << "a after post-increment: " << a << std::endl;

	// test operator--
	std::cout << "b pre-decrement: " << b << std::endl;
	std::cout << "b after pre-decrement: " << --b << std::endl;
	std::cout << "b post-decrement: " << b-- << std::endl;
	std::cout << "b after post-decrement: " << b << std::endl;

	// test min e max
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

	return 0;
}
