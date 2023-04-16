/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:51:53 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 15:00:41 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class President : public AForm {
	private:
		std::string	_target;

	public:
		President();
		President( const std::string& target );
		President( const President& other );
		virtual ~President();
		President& operator=( const President& other );

		virtual void	execute( Bureaucrat const& executor ) const;
};

#endif
