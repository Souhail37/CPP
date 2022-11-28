/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:02:10 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 16:21:29 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat &cat);
		Cat	&operator=(const Cat &cat);
		~Cat();
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif