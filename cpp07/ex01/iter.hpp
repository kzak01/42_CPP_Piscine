/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:01:38 by kzak              #+#    #+#             */
/*   Updated: 2023/05/18 11:29:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T , typename F >
void iter( T* array, size_t lenght, F function ) {
	for (size_t i = 0; i < lenght; i++) {
		function(array[i]);
	}
}

template < typename T >
void print_value( T value ) {
	std::cout << value << std::endl;
}

#endif
