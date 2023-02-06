/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:25:31 by kzak              #+#    #+#             */
/*   Updated: 2023/02/06 19:14:47 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : m_contactCount(0)
{
}

void PhoneBook::addContact(const Contact& contact)
{
    if (m_contactCount < 8)
    {
        m_contacts[m_contactCount++] = contact;
    }
    else
    {
        for (int i = 0; i < 7; ++i)
        {
            m_contacts[i] = m_contacts[i + 1];
        }
        m_contacts[7] = contact;
    }
}

void PhoneBook::displayContactsList() const
{
    std::cout << "Index | First Name | Last Name  | Nickname  \n";
    for (int i = 0; i < m_contactCount; ++i)
    {
        std::cout << i << "     | " << m_contacts[i].getFirstName() << "      | " << m_contacts[i].getLastName() << "      | " << m_contacts[i].getNickname() << "\n";
    }
}

void PhoneBook::displayContactDetails(int index) const
{
    if (index >= 0 && index < m_contactCount)
    {
        std::cout << "First Name: " << m_contacts[index].getFirstName() << "\n";
        std::cout << "Last Name: " << m_contacts[index].getLastName() << "\n";
        std::cout << "Nickname: " << m_contacts[index].getNickname() << "\n";
        std::cout << "Phone Number: " << m_contacts[index].getPhoneNumber() << "\n";
        std::cout << "Darkest Secret: " << m_contacts[index].getDarkestSecret() << "\n";
    }
    else
    {
        std::cout << "Invalid index\n";
    }
}
