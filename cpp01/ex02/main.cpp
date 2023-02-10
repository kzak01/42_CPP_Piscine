/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:47 by kzak              #+#    #+#             */
/*   Updated: 2023/02/10 11:48:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

  // Print the address of the string variable
	std::cout << "Address of the string variable: " << &str << std::endl;

  // Print the address contained in stringPTR
	std::cout << "Address contained in stringPTR: " << strPTR << std::endl;

  // Print the address contained in stringREF
	std::cout << "Address contained in stringREF: " << &strREF << std::endl;

  // Print the value of the string variable
	std::cout << "Value of the string variable: " << str << std::endl;

  // Print the value pointed to by stringPTR
	std::cout << "Value pointed to by stringPTR: " << *strPTR << std::endl;

  // Print the value pointed to by stringREF
	std::cout << "Value pointed to by stringREF: " << strREF << std::endl;

	return 0;
}
