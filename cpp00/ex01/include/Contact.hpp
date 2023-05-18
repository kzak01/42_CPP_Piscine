/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:32:45 by kzak              #+#    #+#             */
/*   Updated: 2023/05/18 11:43:50 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkestsecret;

	public:
		Contact();
		~Contact();

		void	setfirstname(std::string firstname);
		void	setlastname(std::string lastname);
		void	setnickname(std::string nickname);
		void	setphonenumber(std::string phonenumber);
		void	setdarkestsecret(std::string darkestsecret);

		std::string	getfirstname() const;
		std::string	getlastname() const;
		std::string	getnickname() const;
		std::string	getphonenumber() const;
		std::string	getdarkestsecret() const;
};

#endif
