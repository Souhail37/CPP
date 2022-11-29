/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:30 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 14:18:32 by sismaili         ###   ########.fr       */
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
	*this = cat;
	this->brain = new Brain;
}

Cat	&Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
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