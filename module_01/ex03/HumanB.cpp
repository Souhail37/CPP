/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:20:07 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/30 10:37:07 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->name << " can't attack" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}

HumanB::HumanB(std::string _name)
{
	this->weapon = NULL;
	this->name = _name;
}