/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rule.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:58:14 by kzak              #+#    #+#             */
/*   Updated: 2023/02/10 10:37:46 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULE_HPP
# define RULE_HPP

# include <iostream>
# include <string>

class Rule
{
	private:
		std::string	_file;
		std::string	_firstS;
		std::string	_secondS;
		std::string	_fileCopy;

	public:
		Rule(std::string file, std::string firstS, std::string secondS, std::string fileCopy);
		~Rule();
		std::string	get_file() const;
		std::string	get_firstS() const;
		std::string	get_secondS() const;
		std::string	get_fileCopy() const;
};

#endif
