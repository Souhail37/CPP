/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:47:36 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/02 23:17:42 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Bureaucrat"), _sign_grade(10), _exec_grade(10)
{
	std::cout << "Form : Default constructor called" << std::endl;
	_its_signed = false;
}

Form::Form(const Form &form) : _name(form._name), _sign_grade(form._sign_grade), _exec_grade(form._exec_grade)
{
	std::cout << "Form : copy constructor called" << std::endl;
	*this = form;
}

Form	&Form::operator=(const Form &form)
{
	this->_its_signed = form._its_signed;
	return *this;
}

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form : Name constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw	Form::GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw	Form::GradeTooHighException();
	this->_its_signed = false;
}

Form::~Form()
{
	std::cout << "Form : Destructor called" << std::endl;
}

const std::string	Form::getName() const
{
	return this->_name;
}

bool	Form::getItsSigned() const
{
	return this->_its_signed;
}

int	Form::getSignGrade() const
{
	return this->_sign_grade;
}

int	Form::getExGrade() const
{
	return this->_exec_grade;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->_sign_grade)
		this->_its_signed = true;
	else
		throw Form::GradeTooLowException();
}

Form::GradeTooHighException::GradeTooHighException() throw()
{
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is out of range : too high exception";
}

Form::GradeTooLowException::GradeTooLowException() throw()
{	
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is out of range : too low exception";
}

std::ostream	&operator<<(std::ostream &o, Form const &f)
{
	return o << f.getName();
}