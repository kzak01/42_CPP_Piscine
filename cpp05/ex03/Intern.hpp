/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:15:52 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 16:22:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern( const Intern& other );
		~Intern();
		Intern& operator=(const Intern& other);

		AForm* makeForm(const std::string& formName, const std::string& target) const;

		class FormDoesNotExistException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

#endif
