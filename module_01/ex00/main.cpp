/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:11:53 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/03 17:40:33 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*lmeskiti = newZombie("lmeskiti");

	lmeskiti->announce();
	delete lmeskiti;
	randomChump("sa9azo");

	return (0);
}