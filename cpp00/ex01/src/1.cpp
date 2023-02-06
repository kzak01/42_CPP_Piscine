/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:25:29 by kzak              #+#    #+#             */
/*   Updated: 2023/02/06 19:28:08 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../include/MyPhone.hpp"

// int	main()
// {
// 	PhoneBook	phonebook;
// 	std::string command;

// 	while (true)
// 	{
// 		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
// 		std::cin >> command;
// 		if (command == "ADD")
// 			phonebook.addContact();
// 		else if (command == "SEARCH")
// 			phonebook.searchContact();
// 		else if (command == "EXIT")
// 		{
// 			std::cout << "Exit" << std::endl;
// 			break;
// 		}
// 		else
// 			std::cout << "Invalid command" << std::endl;
// 	}
// 	return (0);
// }

#include <iostream>
#include "../include/PhoneBook.hpp"

int main() 
{
    PhoneBook phoneBook;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::string command;
        std::cin >> command;

        if (command == "ADD")
        {
            Contact contact;

            std::cout << "Enter first name: ";
            std::string firstName;
            std::cin >> firstName;
            contact.setFirstName(firstName);
            std::cout << "Enter last name: ";
            std::string lastName;
            std::cin >> lastName;
            contact.setFirstName(lastName);
            std::cout << "Enter nickname: ";
            std::string nickname;
            std::cin >> nickname;
            contact.setFirstName(nickname);
            std::cout << "Enter phone number: ";
            std::string phonenumber;
            std::cin >> phonenumber;
            contact.setFirstName(phonenumber);
            std::cout << "Enter darkest secret: ";
            std::string darkestsecret;
            std::cin >> darkestsecret;
            contact.setFirstName(darkestsecret);

            phoneBook.addContact(contact);
        }
        else if (command == "SEARCH")
        {
            phoneBook.displayContactDetails()
        }
        else if (command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Invalid command\n";
        }
    }

    return 0;
}
