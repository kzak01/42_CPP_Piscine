/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:20:39 by kzak              #+#    #+#             */
/*   Updated: 2023/05/09 11:46:10 by kzak             ###   ########.fr       */
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
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		virtual ~ScalarConverter() = 0;
		ScalarConverter& operator=( const ScalarConverter& other );

		static void convert( const std::string& input );

};

#endif
