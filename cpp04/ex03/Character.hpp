/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:32:03 by kzak              #+#    #+#             */
/*   Updated: 2023/04/01 22:01:15 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	private:
		AMateria		*_inventory[4];
		std::string		_name;

	public:
		Character();
		Character( std::string const &name );
		Character( Character const &name );
		~Character();
		Character			&operator=( Character const &other );

		std::string const	&getName() const;
		void				equip( AMateria *m );
		void				unequip( int idx );
		void				use( int idx, ICharacter &target );
};

#endif
