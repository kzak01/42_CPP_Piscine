/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:13:03 by kzak              #+#    #+#             */
/*   Updated: 2023/05/19 14:40:32 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack() {}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other) {
	*this = other;
}

template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& other) {
	if (this != &other)
		std::stack<T, Container>::operator=(other);
	return *this;
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
	return std::stack<T, Container>::c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
	return std::stack<T, Container>::c.end();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const {
	return std::stack<T, Container>::c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const {
	return std::stack<T, Container>::c.end();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rbegin() {
	return std::stack<T, Container>::c.rbegin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend() {
	return std::stack<T, Container>::c.rend();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rbegin() const {
	return std::stack<T, Container>::c.rbegin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator MutantStack<T, Container>::rend() const {
	return std::stack<T, Container>::c.rend();
}

#endif

