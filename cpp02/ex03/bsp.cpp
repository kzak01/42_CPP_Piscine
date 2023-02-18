/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:33:00 by kzak              #+#    #+#             */
/*   Updated: 2023/02/18 15:03:12 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed x1 = a.getX() - c.getX();
	Fixed y1 = a.getY() - c.getY();
	Fixed x2 = b.getX() - c.getX();
	Fixed y2 = b.getY() - c.getY();

	return x1 * y2 - x2 * y1;
}

/*
area = 0.5 * |AB x AC|, where A, B, and C are the vertices of the triangle,
and AB and AC are the vectors defining two sides of the triangle.

When a point P is inside the triangle, the area of the triangle PAB,
whose base is the side AB, is positive. Similarly, the areas of triangles PBC and PCA are also positive.
Therefore, if a point is inside the triangle, all three triangle areas must have the same sign (positive).

Conversely, if a point P is outside the triangle, the area of at
least one of the triangles PAB, PBC, and PCA has a sign opposite to the other two.
This means that at least one of the sides AB, BC, or AC must be crossed by a line
connecting point P with one of the triangle vertices. If the area of one of the
triangles has a sign opposite to the other two, it means that the cross product
has an opposite sign, and therefore the value returned by
the function will be false (i.e. the point is not inside the triangle).
*/

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcArea2 = area(a, b, c);
	Fixed pabArea2 = area(point, a, b);
	Fixed pbcArea2 = area(point, b, c);
	Fixed pcaArea2 = area(point, c, a);

	return (abcArea2 > 0 && pabArea2 > 0 && pbcArea2 > 0 && pcaArea2 > 0)
		|| (abcArea2 < 0 && pabArea2 < 0 && pbcArea2 < 0 && pcaArea2 < 0);
}
