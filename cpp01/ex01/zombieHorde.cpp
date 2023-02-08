/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:43 by kzak              #+#    #+#             */
/*   Updated: 2023/02/08 21:55:44 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombiehorde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		zombiehorde[i].setname(name);
		zombiehorde[i].announce();
	}
	return (zombiehorde);
}
