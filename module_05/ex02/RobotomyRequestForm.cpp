/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:15:46 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 19:17:50 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45)
{
	// std::cout << "Robotomy : Default constructor called" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) : AForm("Robotomy", 72, 45)
{
	// std::cout << "Robotomy : Copy constructor called" << std::endl;
	*this = r;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	this->target = r.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45)
{
	// std::cout << "Robotomy : Name constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Robotomy : Destructor called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() >= this->getExGrade() || !this->getItsSigned())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "some drilling noises" << std::endl;
		if (rand() % 2)
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "The robotomy failed" << std::endl;
	}
}