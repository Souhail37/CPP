/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:34:27 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 17:07:29 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ct)
{
	this->Name = ct.Name;
	this->Hit_points = ct.Hit_points;
	this->Energy_points = ct.Energy_points;
	this->Attack_damage = ct.Attack_damage;
	return *this;
}

ClapTrap::ClapTrap(std::string Name) : Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
	this->Name = Name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target
			<< ", causing " << this->Attack_damage << " points of damage!" << std::endl;
		this->Energy_points--;
	}
	else
		std::cout << "ClapTrap " << this->Name << " can't attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
	{
		this->Hit_points >= amount ? this->Hit_points -=amount : this->Hit_points = 0;
		std::cout << "ClapTrap " << this->Name << " take damage. Hit points == "
			<< this->Hit_points << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hit_points > 0 && this->Energy_points > 0)
	{
		this->Hit_points += amount;
		this->Energy_points--;
		std::cout << "ClapTrap " << this->Name << " has been repaired. Hit points == "
			<< this->Hit_points << std::endl;
	}
}