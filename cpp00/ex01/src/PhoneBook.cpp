/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:44:32 by kzak              #+#    #+#             */
/*   Updated: 2023/02/06 19:49:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : oldest_index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(const Contact &c)
{
	int index = oldest_index % 8;
	contacts[index] = c;
	oldest_index++;
}

void PhoneBook::displayContacts()
{
	std::cout << std::right << std::setw(10) << "index"
			<< std::right << std::setw(10) << "first name"
			<< std::right << std::setw(10) << "last name"
			<< std::right << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].empty())
		{
			std::cout << std::right << std::setw(10) << i
					<< std::right << std::setw(10) << contacts[i].getfirstname().substr(0, 9)
					<< std::right << std::setw(10) << contacts[i].getlastname().substr(0, 9)
					<< std::right << std::setw(10) << contacts[i].getnickname().substr(0, 9) << std::endl;
		}
	}
}

Contact PhoneBook::searchContact(int index)
{
	if (index >= 0 && index < 8 && !contacts[index].empty())
		return contacts[index];
	return Contact();
}
