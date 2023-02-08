/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:47 by kzak              #+#    #+#             */
/*   Updated: 2023/02/08 21:55:48 by kzak             ###   ########.fr       */
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
	std::cout << "Indirizzo della variabile stringa: " << &str << std::endl;

  // Print the address contained in stringPTR
	std::cout << "Indirizzo contenuto in stringPTR: " << strPTR << std::endl;

  // Print the address contained in stringREF
	std::cout << "Indirizzo contenuto in stringREF: " << &strREF << std::endl;

  // Print the value of the string variable
	std::cout << "Valore della variabile stringa: " << str << std::endl;

  // Print the value pointed to by stringPTR
	std::cout << "Valore puntato da stringPTR: " << *strPTR << std::endl;

  // Print the value pointed to by stringREF
	std::cout << "Valore puntato da stringREF: " << strREF << std::endl;

	return 0;
}
