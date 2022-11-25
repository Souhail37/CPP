/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:20:19 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 19:22:48 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	ft("player1");

	ft.attack("player2");
	ft.takeDamage(80);
	ft.beRepaired(20);
	ft.takeDamage(30);
	ft.highFivesGuys();
}