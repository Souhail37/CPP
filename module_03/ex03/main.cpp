/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:31:59 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 23:34:37 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	dt("player1");

	dt.attack("player2");
	dt.takeDamage(90);
	dt.beRepaired(10);
	dt.attack("player3");
	dt.takeDamage(20);
	dt.attack("player4");
	dt.whoAmI();
}