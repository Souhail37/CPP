/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:44:04 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 15:56:31 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	private :
		const std::string	_name;
		bool	_its_signed;
		const int	_sign_grade;
		const int	_exec_grade;
	public :
		AForm();
		AForm(const AForm &Aform);
		AForm	&operator=(const AForm &Aform);
		AForm(const std::string _name, const int _sign_grade, const int _exec_grade);
		~AForm();
		const std::string	getName() const;
		bool		getItsSigned() const;
		int			getSignGrade() const;
		int			getExGrade() const;
		void	beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const &executor) const = 0;
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

std::ostream	&operator<<(std::ostream &o, AForm const &Aform);

#endif