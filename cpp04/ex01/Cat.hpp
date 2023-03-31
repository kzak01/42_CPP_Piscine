/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:35:03 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 18:53:35 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	private:
		Brain *_brain;

	public:
		Cat();
		Cat( const Cat &other );
		~Cat();
		Cat &operator=( const Cat &other );

		virtual void	makeSound() const;
};

#endif
