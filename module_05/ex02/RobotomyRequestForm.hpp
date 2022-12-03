/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:13:27 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 18:15:10 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private :
		std::string target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &r);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &r);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		std::string		getTarget() const;
		virtual void	execute(Bureaucrat const &executor) const;
};

#endif