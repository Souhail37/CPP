/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:42 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 19:03:21 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	this->brain = new Brain();
	*this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	*this->brain = *dog.brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor called" << std::endl;
	delete	this->brain;
}

std::string	Dog::getType() const
{
	return this->type;
}

void	Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}