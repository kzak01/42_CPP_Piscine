/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:17:31 by kzak              #+#    #+#             */
/*   Updated: 2023/04/16 15:25:36 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class Robotomy : public AForm {
	private:
		std::string	_target;

	public:
		Robotomy();
		Robotomy( const std::string& target );
		Robotomy( const Robotomy& other );
		virtual ~Robotomy();
		Robotomy& operator=( const Robotomy& other);

		virtual void	execute( Bureaucrat const& executor ) const;
};

#endif
