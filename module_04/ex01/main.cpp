/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:53 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 19:39:50 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();
	Animal	*animals[6];
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