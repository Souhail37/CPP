/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:00:15 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/23 13:23:51 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

int main()
{
	PhoneBook	book;
	std::string	command;

	std::cout << "Hello to my phone book\n";
	while (1)
	{
		std::cout << "YOU CAN WRITE ANY OF THIS COMMANDS :\n";
		std::cout << "ADD : save a new contact\n";
		std::cout << "SEARCH : display a specific contact\n";
		std::cout << "EXIT : to stop the program\n\n\n";
		if (!std::getline(std::cin >> std::ws, command))
			exit (1);
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			exit (0);
	}
}