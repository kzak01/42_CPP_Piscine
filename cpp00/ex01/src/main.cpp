/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:27:56 by kzak              #+#    #+#             */
/*   Updated: 2023/02/07 11:58:54 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/PhoneBook.hpp"

void	search_command(PhoneBook *Book)
{
	Book->displayContacts();
}

std::string	get_line()
{
	std::string line;

	while (line.empty() && std::cin.good())
		getline(std::cin, line);
	return (line);
}

void	add_command(PhoneBook *Book)
{
	Contact		contact;
	std::string	line;
	(void)Book;

	std::cout << "Enter First Name: ";
	line = get_line();
	contact.setfirstname(line);
	std::cout << "Enter Last Name: ";
	line = get_line();
	contact.setlastname(line);
	std::cout << "Enter Nickname: ";
	line = get_line();
	contact.setnickname(line);
	std::cout << "Enter Phone Number: ";
	line = get_line();
	contact.setphonenumber(line);
	std::cout << "Enter Darkest Secret: ";
	line = get_line();
	contact.setdarkestsecret(line);

	// std::cout << contact.getfirstname() << std::endl;
	// std::cout << contact.getlastname() << std::endl;
	// std::cout << contact.getnickname() << std::endl;
	// std::cout << contact.getphonenumber() << std::endl;
	// std::cout << contact.getdarkestsecret() << std::endl;

	Book->addContact(contact);
}

int main()
{
	PhoneBook	Book;
	std::string	command;

	std::cout << "Enter command (ADD, SEARCH, EXIT): ";
	while (getline(std::cin, command))
	{
		if (std::cin.eof())
			break;
		else if (command.compare("ADD") == 0)
			add_command(&Book);
		else if (command.compare("SEARCH") == 0)
		{
			search_command(&Book);
		}
		else if (command.compare("EXIT") == 0)
			break;
		else
			std::cout << "Wrong command" << std::endl;
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
	}
	std::cout << "Exit" << std::endl;
	return (0);
}
