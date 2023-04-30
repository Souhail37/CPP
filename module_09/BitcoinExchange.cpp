/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:33:16 by sismaili          #+#    #+#             */
/*   Updated: 2023/04/30 18:41:52 by sismaili         ###   ########.fr       */
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
		syntax_check(i);
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

void	BitcoinExchange::syntax_check(int i)
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
	}
}