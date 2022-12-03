/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:28:59 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 21:07:31 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	public :
		Intern();
		Intern(const Intern &i);
		Intern	&operator=(const Intern &i);
		~Intern();
		AForm	*makeForm(std::string form_name, std::string form_target);
};

#endif