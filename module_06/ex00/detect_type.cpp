/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detect_type.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:26:36 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/05 11:20:57 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

void	detect_type(std::string str)
{
	char	c;
	int		n;
	float	f;
	double	d;

	if (is_char(str))
	{
		c = str[0];
		std::cout << "Char: '" << c << "'" << std::endl;
		n = static_cast<int>(c);
		std::cout << "int: " << n << std::endl;
		f = static_cast<float>(c);
		std::cout << "float: " << f << "f" << std::endl;
		d = static_cast<double>(c);
		std::cout << "double: " << d << std::endl;
	}
	else if (is_int(str))
	{
		long	l = std::stol(str);
		if (l > INT_MAX || l < INT_MIN)
			throw "Unknown type";
		std::cout << std::fixed << std::setprecision(1);
		n = std::stoi(str);
		if ((n >= 32 && n <= 126))
		{
			c = static_cast<char>(n);
			std::cout << "Char: '" << c << "'" << std::endl;
		}
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "int: " << n << std::endl;
		f = static_cast<float>(n);
		std::cout << "float: " << f << "f" << std::endl;
		d = static_cast<double>(n);
		std::cout << "double: " << d << std::endl;
	}
	else if (is_float(str))
	{
		std::cout << std::fixed << std::setprecision(1);
		f = std::stof(str);
		if ((f >= 32 && f <= 126))
		{
			c = static_cast<char>(f);
			std::cout << "Char: '" << c << "'" << std::endl;
		}
		else
			std::cout << "Char: Non displayable" << std::endl;
		n = static_cast<int>(f);
		std::cout << "int: " << n << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		d = static_cast<double>(f);
		std::cout << "double: " << d << std::endl;
	}
	else if (is_double(str))
	{
		std::cout << std::fixed << std::setprecision(1);
		d = std::stod(str);
		if ((d >= 32 && d <= 126))
		{
			c = static_cast<char>(d);
			std::cout << "Char: '" << c << "'" << std::endl;
		}
		else
			std::cout << "Char: Non displayable" << std::endl;
		n = static_cast<int>(d);
		std::cout << "int: " << n << std::endl;
		f = static_cast<float>(d);
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
	}
	else if (str == "-inf" || str == "+inf" || str == "nan")
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str + "f" << std::endl;
		std::cout << "double: " << str << std::endl;
	}
	else
		throw "Unknown type";
}