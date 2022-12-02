/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 23:32:47 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/02 16:51:39 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat test("test", 2);
		std::cout << test << std::endl;
		
		test.decGrade();
		std::cout << test << std::endl;
		
		test.incGrade();
		std::cout << test << std::endl;
		
		test.incGrade();
		std::cout << test << std::endl;

		Bureaucrat test2("test 2", 160);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}