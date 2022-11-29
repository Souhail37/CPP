/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:38 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 18:50:17 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private :
		Brain *brain;
	public :
		Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		~Cat();
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif