/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:55:28 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 21:21:03 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();
		void		setname(std::string name);
		void		announce( void );
		std::string	getname() const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
