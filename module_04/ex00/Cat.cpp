/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:03:18 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 16:21:44 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat : Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	*this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return this->type;
}

void	Cat::makeSound() const
{
	std::cout << "mew mew" << std::endl;
}