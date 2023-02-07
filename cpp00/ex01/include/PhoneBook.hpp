/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:41:46 by kzak              #+#    #+#             */
/*   Updated: 2023/02/07 11:59:01 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int oldest_index;
	
	public:
		PhoneBook();
		~PhoneBook();
		void addContact(const Contact &c);
		void displayContacts();
		// Contact searchContact(int index);
};

#endif
