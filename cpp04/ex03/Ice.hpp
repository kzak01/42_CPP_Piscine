/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 19:49:49 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:36:40 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice( Ice const &other );
		~Ice();
		Ice& operator=( Ice const &other );

		virtual AMateria	*clone() const;
		virtual void		use( ICharacter& target );
};

#endif
