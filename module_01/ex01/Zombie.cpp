/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:46:47 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/26 12:55:50 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set(std::string _name)
{
	this->name = _name;
}

Zombie::Zombie()
{
	std::cout << "";
}

Zombie::~Zombie()
{
	std::cout << this->name << ": is died\n";
}