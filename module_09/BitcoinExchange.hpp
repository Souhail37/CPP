/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:59:00 by sismaili          #+#    #+#             */
/*   Updated: 2023/04/30 18:09:34 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
	private :
		std::map<std::string, std::string> btc;
		std::string	line;
		std::string	date;
		std::string	value;
		std::size_t	pos;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange(std::ifstream &data, std::ifstream &file);
		void		syntax_check(int i);
		std::string	line_substr();
};

#endif