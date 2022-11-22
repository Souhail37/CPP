/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:09:30 by sismaili           #+#    #+#             */
/*   Updated: 2022/11/22 16:09:31 by sismaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private :
		Fixed const	x;
		Fixed const	y;
	public :
		Point();
		Point(const float f1, const float f2);
		Point(const Point &p);
		Point	&operator=(const Point &p);
		~Point();
		float	getPointx(void) const;
		float	getPointy(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif