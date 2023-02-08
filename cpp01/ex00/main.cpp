/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:14 by kzak              #+#    #+#             */
/*   Updated: 2023/02/08 21:55:15 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1;
	zombie1.setname("Valerio");
	zombie1.announce();

	Zombie *zombie2 = newZombie("Lorenzo");
	delete zombie2;

	randomChump("Michela");

	return 0;
}

