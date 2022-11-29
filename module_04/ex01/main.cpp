/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:53 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 18:02:45 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	*animals[6];
	Brain	brain;

	for (int i = 0; i < 6; i++)
	{
		if (i < 3)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 6; i++)
		std::cout << animals[i]->getType() << std::endl;
	for (int i = 0; i < 6; i++)
		delete	animals[i];

	return 0;
}