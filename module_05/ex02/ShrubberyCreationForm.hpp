/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:58:15 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 18:26:26 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private :
		std::string target;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &s);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &s);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		std::string		getTarget() const;
		virtual void	execute(Bureaucrat const &executor) const;
};

#endif