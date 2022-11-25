/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:24:13 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/26 00:24:48 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap : Default constructor called" << std::endl;
	DiamondTrap::name = ClapTrap::name;
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dt)
{
    std::cout << "DiamondTrap : Copy constructor called" << std::endl;
    *this = dt;
}

DiamondTrap::DiamondTrap(std::string Name)
{
    std:: cout << "DiamondTrap : Name constructor called" << std::endl;
	DiamondTrap::name = Name;
	ClapTrap::name = Name + "_clap_name";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap &dt)
{
    this->name = dt.name;
    this->Hit_points = dt.Hit_points;
    this->Energy_points = dt.Energy_points;
    this->Attack_damage = dt.Attack_damage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap : Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
	std::cout << "My name : " << DiamondTrap::name << " || My ClapTrap name : " << ClapTrap::name << std::endl;
}