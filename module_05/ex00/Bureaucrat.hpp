/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:09:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/01 23:40:59 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	private :
		const std::string	_name;
		int	_grade;
	public :
		Bureaucrat();
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat	&operator=(const Bureaucrat &b);
		Bureaucrat(const char *str, int grade);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
		void	incGrade(int grade);
		void	decGrade(int grade);
		class	GradeTooHighException : public std::exception
		{
			public :
				virtual const char* toohigh() const throw()
				{
					return ("Grade is out of range : too high exception");
				}
		};
		class	GradeTooLowException
		{
			public :
				virtual const char* toolow() const throw()
				{
					return ("Grade is out of range : too low exception");
				}
		};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &b);

#endif