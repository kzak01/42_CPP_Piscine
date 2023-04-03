/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:57:39 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:36:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria {
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & other);
		virtual ~AMateria();
		AMateria			&operator=(AMateria const &other);

		std::string			const & getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& other);
};

#endif
