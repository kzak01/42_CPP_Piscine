/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:15:14 by kzak              #+#    #+#             */
/*   Updated: 2023/03/31 14:27:19 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal {
	protected:
		std::string		_type;

	public:
		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal &other );
		~WrongAnimal();
		WrongAnimal &operator=( const WrongAnimal &other );

		void	makeSound() const;
		std::string getType() const;
};

#endif
