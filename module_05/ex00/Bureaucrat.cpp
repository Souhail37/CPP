/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:38:51 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/02 17:26:17 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name)
{
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	this->_grade = b._grade;
	return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat : Name constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return	this->_name;
}

int	Bureaucrat::getGrade() const
{
	return	this->_grade;
}

void	Bureaucrat::incGrade()
{
	std::string	msg = "Grade is out of range : too high exception";
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decGrade()
{
	std::string msg = "Grade is out of range : too low exception";
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is out of range : too high exception";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is out of range : too low exception";
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b)
{
	return o << b.getName() << ", bureaucrat grade " << b.getGrade();
}