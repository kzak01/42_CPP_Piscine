/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:58:30 by kzak              #+#    #+#             */
/*   Updated: 2023/05/25 13:07:18 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>

class RPN {
	private:


	public:
		RPN();
		RPN( const RPN& other );
		RPN& operator=(const RPN& other);
		~RPN();

		int calc(std::string numberStr);
};

#endif
