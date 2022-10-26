/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:12:25 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/26 11:36:30 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string _name) : name(_name)
{
	std::cout << "";
}

Zombie::~Zombie()
{
	std::cout << this->name << ": died\n";
}