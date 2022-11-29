/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:48 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 16:55:26 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private :
		Brain *brain;
	public :
		Dog();
		Dog(const Dog &dog);
		Dog	&operator=(const Dog &dog);
		virtual ~Dog();
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif