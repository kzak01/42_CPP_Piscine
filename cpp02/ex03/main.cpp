/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:24:12 by kzak              #+#    #+#             */
/*   Updated: 2023/02/28 09:30:30 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main()
{
	Point a(0.0, 0.0);
	Point b(1.0, 0.0);
	Point c(0.0, 1.0);
	Point p1(0.5, 0.5);
	Point p2(2.0, 2.0);

	std::cout << "Is point p1 inside the triangle? " << bsp(a, b, c, p1) << std::endl;
	std::cout << "Is point p2 inside the triangle? " << bsp(a, b, c, p2) << std::endl;

	return 0;
}
