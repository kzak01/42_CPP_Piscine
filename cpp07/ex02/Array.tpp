/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:30:32 by kzak              #+#    #+#             */
/*   Updated: 2023/05/15 19:26:51 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array() : _array(new T()), _length(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _length(n) {}

template<typename T>
Array<T>::Array(const Array& other) : _array(new T[other._length]), _length(other._length) {
	for (unsigned int i = 0; i < _length; i++) {
		_array[i] = other._array[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		delete[] _array;
		_array = new T[other._length];
		_length = other._length;
		for (unsigned int i = 0; i < _length; i++) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _length) {
		throw Array<T>::WrongIndexException();
	}
	return _array[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _length) {
		throw Array<T>::WrongIndexException();
	}
	return _array[index];
}

template<typename T>
unsigned int Array<T>::size() const {
	return _length;
}

template<typename T>
const char*	Array<T>::WrongIndexException::what() const throw() {
	return "\033[0;31mArray: Index out of bounds\033[0m";
}

#endif
