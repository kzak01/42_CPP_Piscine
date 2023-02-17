/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:31:25 by kzak              #+#    #+#             */
/*   Updated: 2023/02/17 18:32:57 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const & src) : _x(src.getX()), _y(src.getY())
{
}

Point::~Point()
{
}

Point & Point::operator=(Point const & rhs)
{
	// check for self-assignment
	if (this != &rhs)
	{
		// copy the values of the rhs object's attributes to this object's attributes
		// since they are both Fixed objects, no deep copy is necessary
		const_cast<Fixed&>(_x) = rhs.getX();
		const_cast<Fixed&>(_y) = rhs.getY();
	}
	return *this;
}

Fixed const Point::getX() const
{
	return this->_x;
}

Fixed const Point::getY() const
{
	return this->_y;
}
