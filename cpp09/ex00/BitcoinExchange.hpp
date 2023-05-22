/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:27:01 by kzak              #+#    #+#             */
/*   Updated: 2023/05/22 16:03:47 by kzak             ###   ########.fr       */
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

#include <string_view>
#include <stdexcept>

class Bitcoin {
	private:
		std::map<std::string, float> _data;

	public:
		Bitcoin();
		Bitcoin( const Bitcoin& other );
		Bitcoin& operator=( const Bitcoin& other );
		~Bitcoin();

		int bitExchange( char* argv );
};

#endif
