/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:35 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 16:55:38 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
{
	private :
		Brain *brain;
	public :
		Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		virtual ~Cat();
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif