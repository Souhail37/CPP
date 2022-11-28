/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:53:14 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 16:21:58 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
		~Dog();
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif