/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:39:57 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/25 10:43:03 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string     Contact::getfirst_name() const
{
        return this->first_name;
}

std::string     Contact::getlast_name() const
{
        return this->last_name;
}

std::string     Contact::getnickname() const
{
        return this->nickname;
}

std::string     Contact::getphonenumber() const
{
        return this->phone_number;
}

std::string     Contact::getdarkest_secret() const
{
        return this->darkest_secret;
}
