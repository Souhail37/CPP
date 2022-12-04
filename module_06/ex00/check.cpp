/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:33:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/04 22:41:55 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int	is_char(std::string str)
{
	if (!str[1] && !isdigit(str[0]) && str[0] >= 32 && str[0] <= 126)
		return (1);
	return (0);
}

bool	is_int(std::string str)
{
	int	check = 0;
	
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '-' || str[i] == '+')
			check++;
	}
	return str.find_first_not_of("-+0123456789") == std::string::npos && check <= 1;
}

bool	is_float(std::string str)
{
	int	check_point = 0;
	int	check_sign = 0;
	int i;
	
	if (str[0] == '.')
		return false;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			check_point++;
		if (str[i] == '-' || str[i] == '+')
			check_sign++;
	}
	return str.find_first_not_of("-+0123456789.f") == std::string::npos && (str.back() == 'f' && isdigit(str[i - 2]))
		&& check_point <= 1 && check_sign <= 1;
}

int	is_double(std::string str)
{
	int	check_point = 0;
	int	check_sign = 0;
	
	if (str[0] == '.')
		return false;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '.')
			check_point++;
		if (str[i] == '-' || str[i] == '+')
			check_sign++;
	}
	return str.find_first_not_of("-+0123456789.") == std::string::npos
		&& check_point <= 1 && check_sign <= 1;
}