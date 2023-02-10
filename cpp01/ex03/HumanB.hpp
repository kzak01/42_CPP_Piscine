/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:56:01 by kzak              #+#    #+#             */
/*   Updated: 2023/02/10 10:37:51 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon	*_weapon;

	public:
		HumanB(const std::string &name);
		~HumanB();
		void	setWeapon(Weapon &newWeapon);
		void	attack() const;
};

#endif
