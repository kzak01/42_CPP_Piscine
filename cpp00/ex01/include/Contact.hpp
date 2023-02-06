/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:32:45 by kzak              #+#    #+#             */
/*   Updated: 2023/02/06 19:41:35 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phonenumber;
		std::string _darkestsecret;

	public:
		Contact();
		~Contact();
		void setfirstname(const std::string& firstname);
		void setlastname(const std::string& lastname);
		void setnickname(const std::string& nickname);
		void setphonenumber(const std::string& phonenumber);
		void setdarkestsecret(const std::string& darkestsecret);
};

#endif
