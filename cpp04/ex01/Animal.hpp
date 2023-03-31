/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:55:12 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 13:49:05 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal {
	protected:
		std::string		_type;

	public:
		Animal();
		Animal( std::string type );
		Animal( const Animal &other );
		~Animal();
		Animal &operator=( const Animal &other );

		virtual void	makeSound() const;
		std::string getType() const;
};

#endif
