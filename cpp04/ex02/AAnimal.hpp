/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:55:12 by kzak              #+#    #+#             */
/*   Updated: 2023/04/01 17:44:45 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal {
	protected:
		std::string		_type;

	public:
		Animal();
		Animal( std::string type );
		Animal( const Animal &other );
		virtual ~Animal();
		Animal &operator=( const Animal &other );

		virtual void	makeSound() const = 0;
		std::string getType() const;
};

#endif
