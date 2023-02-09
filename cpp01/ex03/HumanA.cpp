/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:53 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 22:07:04 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attack with their "
		<< this->_weapon.getType() << "!" << std::endl;
}
