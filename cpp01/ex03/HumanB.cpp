/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:58 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 22:10:24 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon = &newWeapon;
}

void	HumanB::attack() const
{
	if (this->_weapon == nullptr)
	{
		std::cout << this->_name << " doesn't have a weapon."
			<< std::endl;
		return;
	}
	std::cout << this->_name << " attack with their "
		<< this->_weapon->getType() << "!" << std::endl;
}
