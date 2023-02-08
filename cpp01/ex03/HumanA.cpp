/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:53 by kzak              #+#    #+#             */
/*   Updated: 2023/02/08 21:55:54 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}

std::string HumanA::getName() const
{
	return this->_name;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attack with their "
		<< this->_weapon.getType() << "!" << std::endl;
}
