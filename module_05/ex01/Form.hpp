/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:30:54 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/02 23:17:09 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private :
		const std::string	_name;
		bool	_its_signed;
		const int	_sign_grade;
		const int	_exec_grade;
	public :
		Form();
		Form(const Form &form);
		Form	&operator=(const Form &form);
		Form(const std::string _name, const int _sign_grade, const int _exec_grade);
		~Form();
		const std::string	getName() const;
		bool		getItsSigned() const;
		int			getSignGrade() const;
		int			getExGrade() const;
		void	beSigned(Bureaucrat &b);
		class	GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException() throw();
				virtual const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException() throw();
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Form const &form);

#endif