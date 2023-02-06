/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:56:20 by kzak              #+#    #+#             */
/*   Updated: 2023/02/06 19:12:16 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {
  public:
    PhoneBook();
    void addContact(const Contact &contact);
    void displayContactsList() const;
    void displayContactDetails(int index) const;

  private:
    static const int MAX_CONTACTS = 8;
    Contact m_contacts[MAX_CONTACTS];
    int m_contactCount;
};

#endif
