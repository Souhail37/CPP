/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:55:40 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/28 12:24:41 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	const &Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}

Weapon::Weapon(std::string _type)
{
	Weapon::setType(_type);
}