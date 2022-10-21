/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:00:15 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/21 13:07:30 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int main()
{
	int	i = 0;

	PhoneBook	instance1;
	std::string	command;
	std::getline(std::cin >> std::ws, command);
	if (command == "ADD")
	{
		std::cout << "first name : ";
		std::getline(std::cin >> std::ws, instance1.contacts[i++]);
		std::cout << std::endl;
		std::cout << "last name : ";
		std::getline(std::cin >> std::ws, instance1.contacts[i++]);
		std::cout << std::endl;
		std::cout << "nickname : ";
		std::getline(std::cin >> std::ws, instance1.contacts[i++]);
		std::cout << std::endl;
		std::cout << "phone number : ";
		std::getline(std::cin >> std::ws, instance1.contacts[i++]);
		std::cout << std::endl;
		std::cout << "darkest secret : ";
		std::getline(std::cin >> std::ws, instance1.contacts[i]);
		std::cout << std::endl;
	}
}