/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:38:51 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/01 23:44:27 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
	*this = b;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b)
{
	this->_grade = b._grade;
	return *this;
}

Bureaucrat::Bureaucrat(const char *str, int grade)
{
	try
	{
		if (grade < 1)
			throw str;
		if (grade > 150)
			throw str;
	}
	catch(const char *str)
	{
		std::cerr << str << '\n';
	}
	
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

void	Bureaucrat::incGrade(int grade)
{
	try
	{
		if (grade < 1)
			throw std::exception();
		grade--;
	}
	catch (std::exception &e)
	{
		std::cout << "Grade is out of range : too high exception" << std::endl;
	}
}

void	Bureaucrat::decGrade(int grade)
{
	try
	{
		if (grade > 150)
			throw std::exception();
		grade--;
	}
	catch (std::exception &e)
	{
		std::cout << "Grade is out of range : too low exception" << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b)
{
	return o << b.getName() << b.getGrade();
}