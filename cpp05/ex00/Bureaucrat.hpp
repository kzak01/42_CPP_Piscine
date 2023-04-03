/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:32:09 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:56:28 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat {
	protected:
		const std::string	_name;
		int			_grade;

	public:
		Bureaucrat();
		Bureaucrat( const Bureaucrat &other );
		Bureaucrat( std::string name, int grade );
		virtual ~Bureaucrat();
		Bureaucrat	&operator=( const Bureaucrat &other );

		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade() const;
		void		decrementGrade() const;

		class GradeTooHighException : public std::exception {
			public :
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				virtual const char *what() const throw();
		};
};

#endif
