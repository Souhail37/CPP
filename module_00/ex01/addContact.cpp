/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:48:47 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/24 11:57:41 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PhoneBook::add()
{
    Contact	instance;
    std::string	first_name, last_name, nickname, phone_number, darkest_secret;
    static int	i = 0;

    while (first_name.empty())
    {
        std::cout << "first name : ";
        if (!std::getline(std::cin, first_name))
            exit (1);
    }
    instance.setfirst_name(first_name);
    while (last_name.empty())
    {
        std::cout << "last name : ";
        if (!std::getline(std::cin, last_name))
            exit (1);
    }
    instance.setlast_name(last_name);
    while (nickname.empty())
    {
        std::cout << "nickname : ";
        if (!std::getline(std::cin, nickname))
            exit (1);
    }
    instance.setnickname(nickname);
    while (phone_number.empty())
    {
        std::cout << "phone_number : ";
        if (!std::getline(std::cin, phone_number))
            exit (1);
    }
    instance.setphone_number(phone_number);
    while (darkest_secret.empty())
    {
        std::cout << "darkest_secret : ";
        if (!std::getline(std::cin, darkest_secret))
            exit (1);
    }
    instance.setdarkest_secret(darkest_secret);
    contacts[i++] = instance;
	if (i == 8)
		i = 0;
}