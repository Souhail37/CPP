/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:00:15 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/24 12:25:21 by sismaili         ###   ########.fr       */
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
		std::cout << "\n\nYOU CAN WRITE ANY OF THIS COMMANDS :\n";
		std::cout << "ADD : save a new contact\n";
		std::cout << "SEARCH : display a specific contact\n";
		std::cout << "EXIT : to stop the program\n\n\n";
		if (!std::getline(std::cin, command))
			exit (1);
		if (command == "ADD")
			book.add();
		else if (command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			exit (0);
		else
			std::cout << "Wrong command !\n";
	}
}