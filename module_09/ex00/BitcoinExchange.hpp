/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:59:00 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/02 22:40:38 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange
{
	private :
		std::map<std::string, std::string> btc;
		std::string	line;
		std::string	date;
		std::string	value;
		std::size_t	pos;
		double		n;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange(std::ifstream &data, std::ifstream &file);
		std::string	line_substr();
		void		check_syntax(int i);
		bool		check_date(std::string &date);
		bool		check_value(std::string &value);
		void		search_for_date(std::string &date);
};

#endif