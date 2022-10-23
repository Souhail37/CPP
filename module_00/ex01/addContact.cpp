/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:48:47 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/23 11:41:07 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	PhoneBook::add()
{
    Contact	instance;
    std::string	first_name, last_name, nickname, phone_number, darkest_secret;
    static int	i = 0;

    std::cout << "first name : ";
    if (!std::getline(std::cin >> std::ws, first_name))
        exit (1);
    instance.setfirst_name(first_name);
    std::cout << "last name : ";
    if (!std::getline(std::cin >> std::ws, last_name))
        exit (1);
    instance.setlast_name(last_name);
    std::cout << "nickname : ";
    if (!std::getline(std::cin >> std::ws, nickname))
        exit (1);
    instance.setnickname(nickname);
    std::cout << "phone_number : ";
    if (!std::getline(std::cin >> std::ws, phone_number))
        exit (1);
    instance.setphone_number(phone_number);
    std::cout << "darkest_secret : ";
    if (!std::getline(std::cin >> std::ws, darkest_secret))
        exit (1);
    instance.setdarkest_secret(darkest_secret);
    contacts[i++] = instance;
	if (i == 8)
		i = 0;
}