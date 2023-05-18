/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:12:41 by kzak              #+#    #+#             */
/*   Updated: 2023/05/18 15:22:26 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(new unsigned int()) {}

Span::Span(unsigned int n) : _n(new unsigned int(n)) {}

Span::Span(const Span& other) : _n{}

Span& Span::operator=(const Span& other) {
	return *this;
}

Span::~Span() {}

void	Span::addNumber(unsigned int n) {
	
}
