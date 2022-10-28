/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:14:06 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/28 19:49:57 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public :
		HumanB(std::string _name);
		void	setWeapon(Weapon &_weapon);
		void	attack();
	private :
		std::string	name;
		Weapon		*weapon;
};

#endif