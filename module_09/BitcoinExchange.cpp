/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:33:16 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/02 22:40:41 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	*this = copy;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	btc = copy.btc;
	line = copy.line;
	date = copy.date;
	value = copy.value;
	pos = copy.pos;
	n = copy.n;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::ifstream &data, std::ifstream &file)
{
	int	i = 0;

	while (std::getline(data, line))
	{
		pos = line.find_first_of(",");
		btc.insert(std::make_pair(line.substr(0, pos), line.substr(pos + 1)));
	}
	btc.erase("date");
	while (std::getline(file, line))
	{
		check_syntax(i);
		i++;
	}
}

std::string	BitcoinExchange::line_substr()
{
	std::size_t	first;
	std::size_t	last;

	first = line.find_first_not_of(" \t");
	if (first == std::string::npos)
	{
		line.clear();
		return line;
	}
	last = line.find_last_not_of(" \t");
	return (line.substr(first, last - first + 1));
}

bool	isLeapYear(int year)
{
	if (year % 4 != 0)
		return false;
	else if (year % 100 != 0)
		return true;
	else if (year % 400 != 0)
		return false;
	else
		return true;
}

bool	isNumber(const std::string &value)
{
	std::size_t	plus;
	std::size_t	minus;
	int			check = 0;

	for (int i = 0; value[i]; i++)
	{
		if (value[i] == '.')
			check++;
	}
	if (check > 1)
		return false;
	plus = value.find_first_of("+");
	minus = value.find_first_of("-");
	if ((plus != 0 && plus != std::string::npos) || (minus != 0 && minus != std::string::npos)
		|| (plus == 0 && value[plus + 1] == '+'))
		return false;
	return true;
}

bool	isValidDate(const std::string &date)
{
    struct tm timeStruct;
    std::stringstream date_stream(date);
    std::string year_str, month_str, day_str;

    getline(date_stream, year_str, '-');
    getline(date_stream, month_str, '-');
    getline(date_stream, day_str, '-');
    int year = atoi(year_str.c_str());
    int month = atoi(month_str.c_str());
    int day = atoi(day_str.c_str());

    if (strptime(date.c_str(), "%Y-%m-%d", &timeStruct) == NULL) {
        return (false);
    }
    if (isLeapYear(year) == false && month == 2 && day > 28)
        return (false);
    return (true);
}

bool	BitcoinExchange::check_date(std::string &date)
{
	if (date.length() != 10)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	if (!isValidDate(date))
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return false;
	}
	return true;
}

bool	BitcoinExchange::check_value(std::string &value)
{
	if (value.find_first_not_of("-+0123456789.") != std::string::npos || !isNumber(value))
	{
		std::cout << "Error: value not valid" << std::endl;
		return false;
	}
	if (value.find_first_of("-") != std::string::npos)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	n = atof(value.c_str());
	if (n > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

void	BitcoinExchange::search_for_date(std::string &date)
{
	std::map<std::string, std::string>::iterator it;
	double	v = 0;

	it = btc.lower_bound(date);
	if (it != btc.begin())
	{
		if (it->first != date)
			it--;
		v = atof(it->second.c_str());
		std::cout << date << " => " << value << " = " << v * n << std::endl;
	}
	else if (it->first == date)
	{
		v = atof(it->second.c_str());
		std::cout << date << " => " << value << " = " << v * n << std::endl;
	}
	else
		std::cout << "Error: bad input => " << line << std::endl;
}

void	BitcoinExchange::check_syntax(int i)
{
	if (i == 0)
	{
		if (line.empty())
			throw "Error: first line is empty";
		line = line_substr();
		if (line != "date | value")
		{
			std::cout << "Error: first line is wrong" << std::endl;
			exit(1);
		}
	}
	else
	{
		if (line.empty())
			return ;
		line = line_substr();
		if (line.empty())
			return ;
		pos = line.find_first_of("|");
		if (pos == std::string::npos || pos == 0 || pos == line.length() - 1)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			return ;
		}
		else if (line[pos - 1] != ' ' || line[pos - 2] == ' ' || line[pos + 1] != ' ' || line[pos + 2] == ' ')
		{
			std::cout << "Error: bad input => " << line << std::endl;
			return ;
		}
		date = line.substr(0, pos - 1);
		value = line.substr(pos + 2);
		if (check_date(date))
		{
			if (check_value(value))
				search_for_date(date);
		}
	}
}