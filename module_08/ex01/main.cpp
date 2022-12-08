/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:54:22 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 16:43:35 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	s(5);

	try
	{
		s.addNumber(3);
		s.addNumber(11);
		s.addNumber(31);
		s.addNumber(61);
		s.addNumber(70);
		std::cout << "Shortest span : " << s.shortestSpan() << std::endl;
		std::cout << "Longest span : " << s.longestSpan() << std::endl;
	}
	catch (const char *err)
	{
		std::cout << err << std::endl;
	}
	return 0;
}