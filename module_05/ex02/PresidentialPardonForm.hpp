/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:31:18 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/03 18:32:42 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private :
		std::string target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &p);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &p);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		std::string		getTarget() const;
		virtual void	execute(Bureaucrat const &executor) const;
};

#endif