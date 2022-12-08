/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:54:22 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 18:19:04 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	s(5);
	Span	p(100);
	int	arr[] = {5, 20, 9, 2, 4, 6, 12, 1, 14, 37};

	try
	{
		s.addNumber(3);
		s.addNumber(11);
		s.addNumber(31);
		s.addNumber(61);
		s.addNumber(70);
		std::cout << "Shortest s span : " << s.shortestSpan() << std::endl;
		std::cout << "Longest s span : " << s.longestSpan() << std::endl;
		
		std::cout << std::string(30, '-') << std::endl;
		
		p.addMult(10, arr);
		std::cout << "Shortest p span : " << p.shortestSpan() << std::endl;
		std::cout << "Longest p span : " << p.longestSpan() << std::endl;
	}
	catch (const char *err)
	{
		std::cout << err << std::endl;
	}
	return 0;
}