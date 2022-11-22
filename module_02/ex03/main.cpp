/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:47:47 by sismaili           #+#    #+#             */
/*   Updated: 2022/11/22 18:47:48 by sismaili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point const	a(5, 6);
	Point const	b(10, 12);
	Point const	c(15, 6);
	Point const point(15, 16);

	if (bsp(a, b, c, point))
		std::cout << "the point is inside the triangle" << std::endl;
	else
		std::cout << "the point is outside the triangle" << std::endl;
	return (0);
}