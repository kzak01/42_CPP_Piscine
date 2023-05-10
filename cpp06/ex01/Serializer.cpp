/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:38:56 by kzak              #+#    #+#             */
/*   Updated: 2023/05/10 16:39:00 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) {}

Serializer::~Serializer() {}

Serializer& Serializer::operator=(const Serializer& other) {
	return *this;
}

uintptr_t Serializer::serialize(Data* prt) {
	return reinterpret_cast<uintptr_t>(prt);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
