/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:17 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 16:50:19 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = animal;
}

Animal	&Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal : Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "??" << std::endl;
}