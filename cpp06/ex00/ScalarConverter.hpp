/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:39 by kzak              #+#    #+#             */
/*   Updated: 2023/06/01 15:43:44 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <cmath>

extern std::string special[6];

class ScalarConverter {
	private:
		static void char_converter( const std::string& input );
		static void number_converter( const std::string& input );

	public:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		~ScalarConverter();
		ScalarConverter& operator=( const ScalarConverter& other );

		static void convert( const std::string& input );

};


#endif
