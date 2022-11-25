/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:14:24 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/26 00:05:13 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap : Default constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &ft)
{
    std::cout << "FragTrap : Copy constructor called" << std::endl;
    *this = ft;
}

FragTrap::FragTrap(std::string Name)
{
    std::cout << "FragTrap : Name constructor called" << std::endl;
    this->name = Name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap    &FragTrap::operator=(const FragTrap &ft)
{
    this->name = ft.name;
    this->Hit_points = ft.Hit_points;
    this->Energy_points = ft.Energy_points;
    this->Attack_damage = ft.Attack_damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (this->Hit_points > 0 && this->Energy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target
			<< ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "FragTrap " << this->name << " can't attack" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap need a high five" << std::endl;
}