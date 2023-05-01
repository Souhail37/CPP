/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:55:20 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/02 00:03:09 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string	name = av[1];
		std::ifstream file(name);
		std::ifstream data("data.csv");

		if (name.empty() || !file || !data)
		{
			std::cout << "Error, file not found" << std::endl;
			return (1);
		}
		try
		{
			BitcoinExchange	btc(data, file);
		}
		catch(const char *e)
		{
			std::cout << e << '\n';
		}
		
	}
	else
		std::cout << "Error: could not open file." << std::endl;
	return (0);
}