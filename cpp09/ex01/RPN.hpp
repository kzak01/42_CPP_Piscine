/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:58:30 by kzak              #+#    #+#             */
/*   Updated: 2023/05/26 12:22:54 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <vector>
# include <cstdlib>

class RPN {
	public:
		RPN();
		RPN( const RPN& other );
		RPN& operator=(const RPN& other);
		~RPN();

		int calc(const std::string& expression);
};

#endif // RPN_HPP
