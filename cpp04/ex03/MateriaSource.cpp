/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 21:34:10 by kzak              #+#    #+#             */
/*   Updated: 2023/04/03 10:37:02 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (materias[i])
			delete materias[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++)
			materias[i] = other.materias[i];
	}
	return *this;
}

AMateria	*MateriaSource::getMateria (std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (materias[i] && materias[i]->getType() == type)
			return materias[i];
	return NULL;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (materias[i] == NULL) {
			materias[i] = m;
			return;
		}
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for ( int i = 0; i < 4; i++ )
		if ( materias[i] && materias[i]->getType() == type )
			return materias[i]->clone();
	return NULL;
}
