/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:44:10 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 19:21:22 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat test("test", 2);
		std::cout << test << std::endl;

		ShrubberyCreationForm s("shrubbery");
		s.beSigned(test);
		s.execute(test);
		test.executeForm(s);

		RobotomyRequestForm r("robot");
		r.beSigned(test);
		r.execute(test);
		test.executeForm(r);

		PresidentialPardonForm p("president");
		p.beSigned(test);
		p.execute(test);
		test.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}