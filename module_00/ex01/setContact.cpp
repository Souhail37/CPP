/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:39:30 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/23 11:19:07 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void	Contact::setfirst_name(std::string first_name)
{
        this->first_name = first_name;
}

void	Contact::setlast_name(std::string last_name)
{
        this->last_name = last_name;
}

void	Contact::setnickname(std::string nickname)
{
        this->nickname = nickname;
}

void	Contact::setphone_number(std::string phone_number)
{
        this->phone_number = phone_number;
}

void	Contact::setdarkest_secret(std::string darkest_secret)
{
        this->darkest_secret = darkest_secret;
}
