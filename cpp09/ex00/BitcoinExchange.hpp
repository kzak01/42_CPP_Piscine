/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:27:01 by kzak              #+#    #+#             */
/*   Updated: 2023/05/26 11:47:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGER_HPP
# define BITCOINEXCHANGER_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <algorithm>
# include <sstream>

class Bitcoin {
	private:
		std::map<std::string, float> _data;

		void	check_convert(std::string line);
		bool	check_data(std::string data);
		bool	check_time(std::string data);
		bool	check_value(std::string value);

	public:
		Bitcoin();
		Bitcoin( const Bitcoin& other );
		Bitcoin& operator=( const Bitcoin& other );
		~Bitcoin();

		int	bitExchange( char* argv );
};

#endif
