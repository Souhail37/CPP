/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:57 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 15:43:59 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Bureaucrat"), _sign_grade(10), _exec_grade(10)
{
	// std::cout << "AForm : Default constructor called" << std::endl;
	_its_signed = false;
}

AForm::AForm(const AForm &Aform) : _name(Aform._name), _sign_grade(Aform._sign_grade), _exec_grade(Aform._exec_grade)
{
	// std::cout << "AForm : copy constructor called" << std::endl;
	*this = Aform;
}

AForm	&AForm::operator=(const AForm &Aform)
{
	this->_its_signed = Aform._its_signed;
	return *this;
}

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	// std::cout << "AForm : Name constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw	AForm::GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw	AForm::GradeTooHighException();
	this->_its_signed = false;
}

AForm::~AForm()
{
	// std::cout << "AForm : Destructor called" << std::endl;
}

const std::string	AForm::getName() const
{
	return this->_name;
}

bool	AForm::getItsSigned() const
{
	return this->_its_signed;
}

int	AForm::getSignGrade() const
{
	return this->_sign_grade;
}

int	AForm::getExGrade() const
{
	return this->_exec_grade;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_sign_grade)
		this->_its_signed = true;
	else
		throw AForm::GradeTooLowException();
}

AForm::GradeTooHighException::GradeTooHighException() throw()
{
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return "Grade is out of range : too high exception";
}

AForm::GradeTooLowException::GradeTooLowException() throw()
{	
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return "Grade is out of range : too low exception";
}

std::ostream	&operator<<(std::ostream &o, AForm const &f)
{
	return o << f.getName();
}