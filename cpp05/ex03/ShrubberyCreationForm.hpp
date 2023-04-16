/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:42:03 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 13:56:09 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class Shrubbery : public AForm {
	private:
		std::string	_target;

	public:
		Shrubbery();
		Shrubbery( const std::string& target );
		Shrubbery( const Shrubbery& other );
		virtual ~Shrubbery();
		Shrubbery& operator=( const Shrubbery& other );

		virtual void	execute( Bureaucrat const& executor ) const;
};

#endif
