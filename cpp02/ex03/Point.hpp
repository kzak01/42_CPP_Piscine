/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzak <kzak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:30:43 by kzak              #+#    #+#             */
/*   Updated: 2023/02/17 18:31:18 by kzak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point();
		Point(float const x, float const y);
		Point(Point const & src);
		~Point();

		Point & operator=(Point const & rhs);

		Fixed const getX() const;
		Fixed const getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
