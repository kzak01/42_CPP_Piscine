/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:45:35 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:36:28 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure( Cure const & );
		~Cure();
		Cure& operator=( Cure const &other );

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter& target);
};

#endif
