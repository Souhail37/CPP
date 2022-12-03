/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:32:58 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 19:17:33 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential", 25, 5)
{
	// std::cout << "Presidential : Default constructor called" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : AForm("Presidential", 25, 5)
{
	// std::cout << "Presidential : Copy constructor called" << std::endl;
	*this = p;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &p)
{
	this->target = p.target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5)
{
	// std::cout << "Presidential : Name constructor called" << std::endl;
	this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "Presidential : Destructor called" << std::endl;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() >= this->getExGrade() || !this->getItsSigned())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}