/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:04:33 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:05:40 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat : Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &Wcat)
{
	std::cout << "WrongCat : Copy constructor called" << std::endl;
	*this = Wcat;
}

WrongCat	&WrongCat::operator=(const WrongCat &Wcat)
{
	this->type = Wcat.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return this->type;
}

void	WrongCat::makeSound() const
{
	std::cout << "mew mew" << std::endl;
}