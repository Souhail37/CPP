/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:57:37 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:22:23 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain : Copy constructor called" << std::endl;
	*this = brain;
}

Brain	&Brain::operator=(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain : Destructor called" << std::endl;
}

std::string	*Brain::getIdeas() const
{
	return	(std::string *)this->ideas;
}

void	Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}