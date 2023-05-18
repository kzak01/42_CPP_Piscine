/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:09:54 by kzak              #+#    #+#             */
/*   Updated: 2023/05/18 15:40:21 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
	private:
		std::vector<unsigned int> _n;

	public:
		Span();
		Span( unsigned int n );
		Span( const Span& other );
		Span& operator=( const Span& other );
		~Span();

		void addNumber(unsigned int n);
		void addMoreNumber(unsigned int n);
		unsigned int shortestSpan() const ;
		unsigned int longestSpan() const ;
};

#endif
