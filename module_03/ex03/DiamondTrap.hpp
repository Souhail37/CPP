/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:17:34 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 23:38:49 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private :
		std::string	name;
	public :
		DiamondTrap();
		DiamondTrap(const DiamondTrap &dt);
		DiamondTrap(std::string Name);
		DiamondTrap	&operator=(const DiamondTrap &dt);
		~DiamondTrap();
		void	attack(const std::string &target);
		void	whoAmI();
};

#endif