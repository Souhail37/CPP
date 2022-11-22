/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:12:49 by sismaili           #+#    #+#             */
/*   Updated: 2022/11/22 16:12:51 by sismaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float f1, const float f2) : x(f1), y(f2)
{
}

Point::Point(const Point &p) : x(p.x), y(p.y)
{
}

Point   &Point::operator=(const Point &p)
{
    (void)p;
    return *this;
}

Point::~Point()
{
}

float Point::getPointx() const
{
    return this->x.toFloat();
}

float Point::getPointy() const
{
    return this->y.toFloat();
}