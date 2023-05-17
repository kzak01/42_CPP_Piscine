/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:15:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/17 12:29:54 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template<typename T>
bool	easyfind(const T& conteiner, int toFind) {
	typename T::const_ite
}

const char* NoOccurrenceException::what() const throw() {
	return "\033[0;31mNo occurrence found\033[0m";
}

const char* FoundException::what() const throw() {
	return "\033[0;32mNumber found!\033[0m";
}

#endif
