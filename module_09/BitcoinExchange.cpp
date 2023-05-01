/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:33:16 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/01 00:55:01 by sismaili         ###   ########.fr       */
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
	this->btc = copy.btc;
	this->line = copy.line;
	this->date = copy.date;
	this->value = copy.value;
	this->pos = copy.pos;
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

void	BitcoinExchange::check_date()
{
	if (!isValidDate(date))
		throw "Error, date not valid";
}

void	BitcoinExchange::check_value()
{
	
}

void	BitcoinExchange::check_syntax(int i)
{
	if (i == 0)
	{
		if (line.empty())
			throw "Error, first line is empty";
		line = line_substr();
		if (line != "date | value")
			throw "Syntax error";
	}
	else
	{
		if (line.empty())
			return ;
		line = line_substr();
		pos = line.find_first_of("|");
		if (pos == std::string::npos)
			throw "Syntax error";
		date = line.substr(0, pos - 1);
		value = line.substr(pos + 2);
		check_date();
	}
}