/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:32:50 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:37:10 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria	*materias[4];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const &other );
		~MateriaSource();
		MateriaSource	&operator=( MateriaSource const &other );

		AMateria	*getMateria( std::string const & type );
		AMateria	*createMateria( std::string const & type );
		void		learnMateria( AMateria* );
};


#endif
