/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:39 by kzak              #+#    #+#             */
/*   Updated: 2023/05/08 13:04:27 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
# include <limits>
# include <cmath>

class ScalarConverter {
	// private:
		// std::string _input;

	public:
		static void convert(const std::string& input);
		// ScalarConverter();
		// ScalarConverter( std::string& input );
		// ScalarConverter( const ScalarConverter& other );
		// ~ScalarConverter();
		// ScalarConverter& operator=( const ScalarConverter& other );

		// std::string getInput() const;
		// std::string getChar() const;
		// int getInt() const;
		// float getFloat() const;
		// double getDouble() const;
};

std::ostream&	operator<<(std::ostream& out, const ScalarConverter& bureaucra);

#endif
