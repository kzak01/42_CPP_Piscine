/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:38:08 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 15:12:55 by kzak             ###   ########.fr       */
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
	


	if (level.compare("debug"))
		this->debug();
	else if (level.compare("info"))
		this->info();
	else if (level.compare("warning"))
		this->warning();
	else if (level.compare("error"))
		this->error();
	else
		std::cout << "\033[1;31m" << "Wrong" << "\033[0m" << std::endl;
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my"
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	"years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
