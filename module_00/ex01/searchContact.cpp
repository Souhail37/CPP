/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:37:07 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/24 17:54:25 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PhoneBook::search_fn(int n)
{
	std::cout << std::setw(10) << n << "|";
	if (contacts[n].getfirst_name().length() > 10)
	{
		std::string	str = contacts[n].getfirst_name().substr(0, 10);
		str.back() = '.';
		std::cout << std::setw(10) << str << "|";
	}
	else
		std::cout << std::setw(10) << contacts[n].getfirst_name() << "|";
}

void	PhoneBook::search_ln(int n)
{
	if (contacts[n].getlast_name().length() > 10)
	{
		std::string	str = contacts[n].getlast_name().substr(0, 10);
		str.back() = '.';
		std::cout << std::setw(10) << str << "|";
	}
	else
		std::cout << std::setw(10) << contacts[n].getlast_name() << "|";
}

void	PhoneBook::search_nn(int n)
{
	if (contacts[n].getnickname().length() > 10)
	{
		std::string	str = contacts[n].getnickname().substr(0, 10);
		str.back() = '.';
		std::cout << std::setw(10) << str << "|";
	}
	else
		std::cout << std::setw(10) << contacts[n].getnickname() << "|";
}

void	PhoneBook::contact_info()
{
	std::string	index;
	int			i = -1;

	while (index.empty() || (i <= 0 || i >= 7))
	{
		std::cout << "Write an index to display : ";
		if (!std::getline(std::cin, index))
			exit (1);
		i = atoi(index.c_str());
		if (i >= 0 && i <= 7)
		{
			std::cout << "index is " << i << "\n";
			std::cout << "first name : " << contacts[i].getfirst_name() << std::endl;
			std::cout << "last name : " << contacts[i].getlast_name() << std::endl;
			std::cout << "nick name : " << contacts[i].getnickname() << std::endl;
			std::cout << "phone number : " << contacts[i].getphonenumber() << std::endl;
			std::cout << "darkest secret : " << contacts[i].getdarkest_secret() << std::endl;
			break;
		}
		else
			std::cout << "wrong number\n";
	}
}

void	PhoneBook::search()
{
	int	n = 0;

	if (contacts[0].getfirst_name().empty())
		std::cout << "THERE IS NO CONTACT YET \n";
	else
	{
		std::cout << std::setw(10) << "index" << "|"
		<< std::setw(10) << "first name" << "|"
		<< std::setw(10) << "last name" << "|"
		<< std::setw(10) << "nickname" << "|" << std::endl;
		while (n < 8)
		{
			if (!contacts[n].getfirst_name().empty())
			{
				PhoneBook::search_fn(n);
				PhoneBook::search_ln(n);
				PhoneBook::search_nn(n);
				std::cout << std::endl;
			}
			n++;
		}
		PhoneBook::contact_info();
	}
}
