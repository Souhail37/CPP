/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:01:40 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 18:46:55 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	scav("player1");

	scav.attack("player2");
	scav.takeDamage(50);
	scav.beRepaired(10);
	scav.guardGate();
	scav.takeDamage(60);
	scav.attack("bot");
}