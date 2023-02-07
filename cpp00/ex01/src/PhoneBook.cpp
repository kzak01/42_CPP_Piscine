/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:44:32 by kzak              #+#    #+#             */
/*   Updated: 2023/02/07 18:42:44 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : oldest_index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(const Contact &c)
{
	int	index = oldest_index % 8;
	contacts[index] = c;
	oldest_index++;
}

void PhoneBook::displayContacts()
{
	std::cout << std::right << std::setw(10) << "index" << " | "
			<< std::right << std::setw(10) << "first name" << " | "
			<< std::right << std::setw(10) << "last name" << " | "
			<< std::right << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].getfirstname().empty())
		{
			std::string firstname = contacts[i].getfirstname().substr(0, 10);
			if (firstname.length() >= 9)
				firstname[9] = '.';
			std::string lastname = contacts[i].getlastname().substr(0, 10);
			if (lastname.length() >= 9)
				lastname[9] = '.';
			std::string nickname = contacts[i].getnickname().substr(0, 10);
			if (nickname.length() >= 9)
				nickname[9] = '.';
			std::cout << std::right << std::setw(10) << (i + 1) << " | "
				<< std::right << std::setw(10) << firstname << " | "
				<< std::right << std::setw(10) << lastname << " | "
				<< std::right << std::setw(10) << nickname << std::endl;
		}
	}
}

void PhoneBook::searchContact(int index)
{
	if (index >= 0 && index < 8 && !contacts[index].getfirstname().empty())
	{
		std::cout << "First name: " << contacts[index].getfirstname() << std::endl;
		std::cout << "Last name: " << contacts[index].getlastname() << std::endl;
		std::cout << "Nickname: " << contacts[index].getnickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].getphonenumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getdarkestsecret() << std::endl;
	}
}

int	PhoneBook::get_oldest_index() const
{
	return this->oldest_index;
}
