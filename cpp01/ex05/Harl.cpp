/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:38:08 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 15:54:16 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain( std::string level )
{
	typedef void(Harl::*MessageFunction)(void);
	MessageFunction messageFunctions[4] = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[4] = { "debug", "info", "warning", "error" };

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			MessageFunction messageFunction = messageFunctions[i];
			(this->*messageFunction)();
			break;
		}
	}
}

void	Harl::debug()
{
	std::cout << "Debug: I love having extra bacon for my"
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "Info: I cannot believe adding extra bacon costs more money. You didn’t put"
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for"
	"years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "Error: This is unacceptable! I want to speak to the manager now." << std::endl;
}
