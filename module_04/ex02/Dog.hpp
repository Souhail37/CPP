/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:49 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 16:55:46 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
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