/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:56:08 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 22:06:56 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return this->_type;
}

void	Weapon::setType(const std::string &newType)
{
	this->_type = newType;
}
