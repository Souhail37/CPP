/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:37:07 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/24 12:40:10 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PhoneBook::search_fn(int n)
{
	std::cout << std::setw(10) << n << " ";
	if (contacts[n].getfirst_name().length() > 10)
	{
		std::string	str = contacts[n].getfirst_name().substr(0, 10);
		str.back() = '.';
		std::cout << std::setw(10) << str << " ";
	}
	else
		std::cout << std::setw(10) << contacts[n].getfirst_name() << " ";
}

void	PhoneBook::search_ln(int n)
{
	if (contacts[n].getlast_name().length() > 10)
	{
		std::string	str = contacts[n].getlast_name().substr(0, 10);
		str.back() = '.';
		std::cout << std::setw(10) << str << " ";
	}
	else
		std::cout << std::setw(10) << contacts[n].getlast_name() << " ";
}

void	PhoneBook::search_nn(int n)
{
	if (contacts[n].getnickname().length() > 10)
	{
		std::string	str = contacts[n].getnickname().substr(0, 10);
		str.back() = '.';
		std::cout << std::setw(10) << str;
	}
	else
		std::cout << std::setw(10) << contacts[n].getnickname();
}

// void	PhoneBook::search_pn(int i)
// {
// 	if (contacts[i].getphonenumber().length() > 10)
// 	{
// 		std::string	str = contacts[i].getphonenumber().substr(0, 10);
// 		str.back() = '.';
// 		std::cout << std::setw(10) << str << " ";
// 	}
// 	else
// 		std::cout << std::setw(10) << contacts[i].getphonenumber() << " ";
// }

// void	PhoneBook::search_ds(int i)
// {
// 	if (contacts[i].getdarkest_secret().length() > 10)
// 	{
// 		std::string	str = contacts[i].getdarkest_secret().substr(0, 10);
// 		str.back() = '.';
// 		std::cout << std::setw(10) << str << " ";
// 	}
// 	else
// 		std::cout << std::setw(10) << contacts[i].getdarkest_secret() << " ";
// }

void	PhoneBook::search()
{
	int	index;
	int	n = 0;
	std::cout << "n = " << n << std::endl;

	std::cout << std::setw(10) << "index" << "|"
	<< std::setw(10) << "first name" << "|"
	<< std::setw(10) << "last name" << "|"
	<< std::setw(10) << "nickname" << "|" << std::endl;
	while (n < 8)
	{
		PhoneBook::search_fn(n);
		PhoneBook::search_ln(n);
		PhoneBook::search_nn(n);
		n++;
		std::cout << std::endl;
	}
	std::cout << "Write an index to display : ";
	std::cin >> index;
	if (index >= 1 || index <= 8)
	{
		std::cout << contacts[index - 1].getfirst_name() << std::endl;
		std::cout << contacts[index - 1].getlast_name() << std::endl;
		std::cout << contacts[index - 1].getnickname() << std::endl;
		std::cout << contacts[index - 1].getphonenumber() << std::endl;
		std::cout << contacts[index - 1].getdarkest_secret() << std::endl;
	}

}