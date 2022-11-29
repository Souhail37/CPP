/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:58:30 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:25:37 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	*this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor called" << std::endl;
}

std::string	Dog::getType() const
{
	return this->type;
}

void	Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}