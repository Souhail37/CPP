/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:05 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:34:45 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = animal;
}

AAnimal	&AAnimal::operator=(const AAnimal &animal)
{
	this->type = animal.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal : Destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
	return this->type;
}
