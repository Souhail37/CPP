/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:30:32 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/02 23:18:52 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat test("test", 20);
		std::cout << test << std::endl;
		
		test.decGrade();
		std::cout << test << std::endl;
		
		test.incGrade();
		std::cout << test << std::endl;
		
		test.incGrade();
		std::cout << test << std::endl;
		
		Form f("ok", 50, 50);
		f.beSigned(test);
		test.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}