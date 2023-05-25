/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:58:25 by kzak              #+#    #+#             */
/*   Updated: 2023/05/25 13:06:37 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cout << "\033[0;31mError: ./RPN + Polish mathematical expression\033[0m" << std::endl;
		return 1;
	}
	RPN rpn;
	return rpn.calc(argv[1]);
}
