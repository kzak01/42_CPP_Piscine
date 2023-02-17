/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:26:01 by kzak              #+#    #+#             */
/*   Updated: 2023/02/17 18:08:40 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point_number(0)
{
}

Fixed::Fixed(const int n)
{
	this->_fixed_point_number = n << _kFractionalBits;
}

Fixed::Fixed(const float f)
{
	this->_fixed_point_number = roundf(f * (1 << _kFractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_fixed_point_number = other._fixed_point_number;
	return *this;
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return this->_fixed_point_number;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point_number = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_fixed_point_number / (float)(1 << _kFractionalBits);
}

int		Fixed::toInt(void) const
{
	return this->_fixed_point_number >> _kFractionalBits;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

/*Comparison Operator*/

bool Fixed::operator>(const Fixed &other) const
{
	return this->_fixed_point_number > other._fixed_point_number;
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->_fixed_point_number < other._fixed_point_number;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->_fixed_point_number >= other._fixed_point_number;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->_fixed_point_number <= other._fixed_point_number;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->_fixed_point_number == other._fixed_point_number;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->_fixed_point_number != other._fixed_point_number;
}

/*Arithmetic operators*/

Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

/*Increment/Decrement*/

Fixed& Fixed::operator++()
{
	this->_fixed_point_number += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->_fixed_point_number -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

/*Min/Max*/

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a._fixed_point_number < b._fixed_point_number)
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._fixed_point_number < b._fixed_point_number)
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a._fixed_point_number > b._fixed_point_number)
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._fixed_point_number > b._fixed_point_number)
		return a;
	return b;
}
