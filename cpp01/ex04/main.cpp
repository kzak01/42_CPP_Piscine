/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:48:19 by kzak              #+#    #+#             */
/*   Updated: 2023/02/09 22:46:53 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Rule.hpp"

void	replace_string(std::string &text,const std::string first,const std::string second)
{
	std::string::size_type start_pos = 0;

	while ((start_pos = text.find(first, start_pos)) != std::string::npos)
	{
		text.erase(start_pos, first.length());
		text.insert(start_pos, second);
		start_pos += second.length();
	}
}

std::string	getFilePath(const std::string &fileName)
{
	return fileName;
}

void	open_change_file(Rule *rule)
{
	std::string text;
	std::ifstream input_file(getFilePath(rule->get_file()).c_str());
	if (!input_file.good())
	{
		std::cout <<  "\033[1;31m" << "Error: Input file does not exist"  << "\033[0m" << std::endl;
		return;
	}
	std::ofstream output_file(getFilePath(rule->get_fileCopy()).c_str());
	if (!output_file.good())
	{
		std::cout <<  "\033[1;31m" << "Error: Output file error"  << "\033[0m" << std::endl;
		return;
	}

	if (input_file.is_open() && output_file.is_open())
	{
		while (std::getline(input_file, text))
		{
			replace_string(text, rule->get_firstS(), rule->get_secondS());
			output_file << text << std::endl;
		}
		input_file.close();
		output_file.close();
	}
	else
		std::cout <<  "\033[1;31m" << "Error with file"  << "\033[0m" << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout <<  "\033[1;31m" << "Input a Filename and two string"  << "\033[0m" << std::endl;
		return (0);
	}
	std::string file = argv[1];
	std::string firstS = argv[2];
	std::string secondS = argv[3];
	std::string fileCopy = file + ".replace";
	Rule rule(file, firstS, secondS, fileCopy);
	open_change_file(&rule);
	return (0);
}
