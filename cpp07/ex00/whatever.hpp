/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:03:44 by kzak              #+#    #+#             */
/*   Updated: 2023/05/17 11:39:16 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void	swap( T& x, T& y ) {
	T swap;
	swap = x;
	x = y;
	y = swap;
}

template< typename M >
const M&	max( const M& x, const M& y ) {
	if (x > y)
		return x;
	return y;
}

template< typename N >
const N&	min( const N& x, const N& y ) {
	if (x < y)
		return x;
	return y;
}

#endif
