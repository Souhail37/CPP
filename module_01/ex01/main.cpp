/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:46:22 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/03 17:42:35 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	N = 0;
	Zombie	*zombies = zombieHorde(N, "sa9azo");

	while (N > 0)
	{
		zombies->announce();
		N--;
	}
	delete [] zombies;

	return (0);
}