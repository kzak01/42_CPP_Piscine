/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:32:09 by kzak              #+#    #+#             */
/*   Updated: 2023/04/02 12:13:42 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat( Bureaucrat const &other );
		virtual ~Bureaucrat();
		Bureaucrat	&operator=( Bureaucrat const &other );
};

#endif
