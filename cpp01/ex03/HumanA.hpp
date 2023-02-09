/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:55 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 22:11:58 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon	&_weapon;

	public:
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();
		void	attack() const;
};

#endif
