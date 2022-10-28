/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:09:39 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/28 15:55:39 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public :
		HumanA(std::string _name, Weapon &_weapon);
		void	setWeapon(std::string _name);
		void	attack();
	private :
		std::string	name;
		Weapon		&weapon;
};

#endif