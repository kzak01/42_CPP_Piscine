/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:05:01 by kzak              #+#    #+#             */
/*   Updated: 2023/04/01 17:48:22 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public Animal {
	private:
		Brain *_brain;

	public:
		Dog();
		Dog( const Dog &other );
		~Dog();
		Dog &operator=( const Dog &other );

		virtual void	makeSound() const;
};

#endif
