/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:03:41 by sismaili           #+#    #+#             */
/*   Updated: 2022/11/22 18:03:42 by sismaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	det_cal(Point const point1, Point const point2, Point const point3)
{
	Fixed	det;

	det = point1.getPointx() * (point2.getPointy() - point3.getPointy()) + point2.getPointx() * (point3.getPointy() - point1.getPointy())
		+ point3.getPointx() * (point1.getPointy() - point2.getPointy());
	if (det < 0)
		det = det * -1;
	return (det / 2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	det;
	Fixed	det1;
	Fixed	det2;
	Fixed	det3;

	det = det_cal(a, b, c);
	det1 = det_cal(a, b, point);
	det2 = det_cal(point, b, c);
	det3 = det_cal(a, point, c);
	if (det == det1 + det2 + det3 && det1 != 0 && det2 != 0 && det3 != det3)
		return (1);
	return (0);
}