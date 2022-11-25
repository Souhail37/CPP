/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:58:02 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 18:36:02 by sismaili         ###   ########.fr       */
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