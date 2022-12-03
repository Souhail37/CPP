/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:31:49 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 19:23:41 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{
	// std::cout << "Shrubbery : Default constructor called" << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : AForm("Shrubbery", 145, 137)
{
	// std::cout << "Shrubbery : Copy constructor called" << std::endl;
	*this = s;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s)
{
	this->target = s.target;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
	// std::cout << "Shrubbery : Name constructor called" << std::endl; 
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "Shrubbery : Destructor called" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() >= this->getExGrade() || !this->getItsSigned())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream	ofile(this->getTarget() + "_shrubbery");
		ofile << "oxoxoo    ooxoo\n\
  ooxoxo oo  oxoxooo\n\
 oooo xxoxoo ooo ooox\n\
 oxo o oxoxo  xoxxoxo\n\
  oxo xooxoooo o ooo\n\
    ooo\\oo\\  /o/o\n\
        \\  \\/ /\n\
         |   /\n\
         |  |\n\
         | D|\n\
         |  |\n\
         |  |\n\
  ______/____\\____\n";
	   ofile.close();
	}
}