/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:32 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 18:01:08 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	this->brain = new Brain;
	*this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	*this->brain = *cat.brain;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor called" << std::endl;
	delete this->brain;
}

std::string	Cat::getType() const
{
	return this->type;
}

void	Cat::makeSound() const
{
	std::cout << "mew mew" << std::endl;
}