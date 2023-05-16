/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:15:59 by kzak              #+#    #+#             */
/*   Updated: 2023/05/16 11:28:52 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
# define EASYFIND_TPP

template<typename T>
void	easyfind(T conteiner, int toFind) {
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = conteiner.end();

	for (it = conteiner.begin(); it != ite; it++) {
		if (*it == toFind)
			throw FoundException();
	}
	throw NoOccurrenceException();
}

const char* NoOccurrenceException::what() const throw() {
	return "\033[0;31mNo occurrence found\033[0m";
}

const char* FoundException::what() const throw() {
	return "\033[0;32mNumber found!\033[0m";
}

#endif
