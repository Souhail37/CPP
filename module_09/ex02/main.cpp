/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:14:10 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/04 23:54:57 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::string	number;

	try
	{
		if (ac == 1)
			throw "Error";
		else
		{
			for (int i = 1; i < ac; i++)
			{
				number = av[i];
				for (std::size_t j = 0; j < number.length(); j++)
				{
					if (!isdigit(number[j]))
						throw "Error";
				}
			}
		}
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
	}
}