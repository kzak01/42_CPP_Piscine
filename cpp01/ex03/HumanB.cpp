/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:58 by kzak              #+#    #+#             */
/*   Updated: 2023/02/08 21:55:59 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

std::string HumanB::getName() const
{
	return this->_name;
}

void	HumanB::attack()
{
	if (this->_weapon)
	{
			std::cout << this->_name
			<< " attack with their "
			<< this->_weapon->getType()
			<< "!" << std::endl;
	}
	else
	{
			std::cout << this->_name
			<< " attack with their fist!"
			<< std::endl;
	}
}
