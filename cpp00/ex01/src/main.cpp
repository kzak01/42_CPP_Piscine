/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:27:56 by kzak              #+#    #+#             */
/*   Updated: 2023/05/17 11:12:55 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/PhoneBook.hpp"

std::string	get_line()
{
	std::string line;

	while (line.empty() && std::cin.good())
		getline(std::cin, line);
	return (line);
}

int	is_number(const std::string &s)
{
	for (int i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (1);
	}
	return (0);
}

void	search_command(PhoneBook *Book)
{
	std::string	line;

	Book->displayContacts();
	std::cout << "Enter Index: ";
	line = get_line();
	if (!is_number(line))
	{
		int index = atoi(line.c_str());
		if (index <= 8 && index >= 1)
			Book->searchContact(index - 1);
		else
			std::cout << "\033[1;31m" << "Index to big/small" << "\033[0m" << std::endl;
	}
	else
		std::cout << "\033[1;31m" << "Input is not a number" << "\033[0m" << std::endl;
}


void	add_command(PhoneBook *Book)
{
	Contact		contact;
	std::string	line;

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
			if (Book.get_oldest_index() > 0)
				search_command(&Book);
			else
				std::cout << "\033[1;31m" << "No Contact Yet :'(" << "\033[0m" << std::endl;
		}
		else if (command.compare("EXIT") == 0)
			break;
		else
			std::cout << "\033[1;31m" << "Wrong command" << "\033[0m" << std::endl;
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
	}
	std::cout << "Exit" << std::endl;
	return (0);
}
