/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:55:20 by sismaili          #+#    #+#             */
/*   Updated: 2023/04/30 17:37:35 by sismaili         ###   ########.fr       */
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
			std::cerr << e << '\n';
		}
		
	}
	return (0);
}