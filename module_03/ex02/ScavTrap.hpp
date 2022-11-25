/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:05:11 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 19:05:22 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(const ScavTrap &st);
		ScavTrap(std::string Name);
		ScavTrap	&operator=(const ScavTrap &st);
		~ScavTrap();
		void	attack(const std::string &target);
		void	guardGate();	
};

#endif