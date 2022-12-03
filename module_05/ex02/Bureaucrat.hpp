/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:43:49 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 18:44:45 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private :
		const std::string	_name;
		int	_grade;
	public :
		Bureaucrat();
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat	&operator=(const Bureaucrat &b);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
		void	incGrade();
		void	decGrade();
		void	signForm(const AForm &form);
		void	executeForm(AForm const &form);
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException() throw();
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException() throw();
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif