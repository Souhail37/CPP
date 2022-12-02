/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:09:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/02 16:50:59 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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