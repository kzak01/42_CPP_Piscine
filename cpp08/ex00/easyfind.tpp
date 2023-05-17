/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:15:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/17 16:12:43 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template<typename T>
bool	easyfind(const T& container, int toFind) {
	typename T::const_iterator it = std::find(container.begin(), container.end(), toFind);
	return it != container.end();
}

const char* NoOccurrenceException::what() const throw() {
	return "\033[0;31mNo occurrence found\033[0m";
}

const char* FoundException::what() const throw() {
	return "\033[0;32mNumber found!\033[0m";
}

#endif
