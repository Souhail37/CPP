/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:43 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 18:52:30 by sismaili         ###   ########.fr       */
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
	std::cout << "Cat : Copy constructor called" << std::endl;
	*this = dog;
	this->brain = new Brain();
}

Dog	&Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
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
	std::cout << "3aw 3aw" << std::endl;
}