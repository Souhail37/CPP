/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:19 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 14:18:21 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
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