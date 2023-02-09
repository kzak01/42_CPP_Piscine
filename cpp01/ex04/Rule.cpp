/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rule.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:07:28 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 12:18:30 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rule.hpp"

Rule::Rule(std::string file, std::string firstS, std::string secondS, std::string fileCopy) :
_file(file), _firstS(firstS), _secondS(secondS), _fileCopy(fileCopy)
{
}

Rule::~Rule()
{
}

std::string	Rule::get_file() const
{
	return this->_file;
}

std::string	Rule::get_firstS() const
{
	return this->_firstS;
}

std::string	Rule::get_secondS() const
{
	return this->_secondS;
}

std::string	Rule::get_fileCopy() const
{
	return this->_fileCopy;
}
