/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:41:46 by kzak              #+#    #+#             */
/*   Updated: 2023/02/07 17:13:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		oldest_index;
	
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(const Contact &c);
		void	displayContacts();
		void	searchContact(int index);
		int		get_oldest_index() const;
};

#endif
