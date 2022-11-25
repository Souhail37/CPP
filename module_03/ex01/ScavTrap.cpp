/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:05:37 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/26 00:04:10 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default constructor called" << std::endl;
	this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
    std::cout << "ScavTrap : Copy constructor called" << std::endl;
    *this = st;
}

ScavTrap::ScavTrap(std::string Name)
{
    std::cout << "ScavTrap : Name constructor called" << std::endl;
    this->Name = Name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &st)
{
    this->Name = st.Name;
    this->Hit_points = st.Hit_points;
    this->Energy_points = st.Energy_points;
    this->Attack_damage = st.Attack_damage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->Hit_points > 0 && this->Energy_points > 0)
	{
		std::cout << "ScavTrap " << this->Name << " attacks " << target
			<< ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ScavTrap " << this->Name << " can't attack" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is in Gate keeper mode." << std::endl;
}