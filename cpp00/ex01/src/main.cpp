/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:27:56 by kzak              #+#    #+#             */
/*   Updated: 2023/02/06 19:32:09 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/PhoneBook.hpp"

int main()
{
	PhoneBook Book;
	std::string command;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (command == "ADD")
			Book->addContact();
		else if (command == "SEARCH")
			Book->searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Wrong command" << std::endl;
	}
	std::cout << "Exit" << std::endl;
	return (0);
}
