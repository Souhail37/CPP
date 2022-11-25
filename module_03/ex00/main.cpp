/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:06:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 17:06:06 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	player("player1");
	
	player.attack("player2");
	player.takeDamage(5);
	player.beRepaired(10);
	player.takeDamage(15);
	player.attack("player2");
	player.takeDamage(5);
}