/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:14:10 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/05 17:21:18 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	std::string	number;
	std::vector<std::string> temp;

	try
	{
		if (ac == 1)
			throw "Error";
		else
		{
			for (int i = 1; i < ac; i++)
			{
				number = av[i];
				temp.push_back(number);
				for (std::size_t j = 0; j < number.length(); j++)
				{
					if (!isdigit(number[j]))
						throw "Error";
				}
			}
			PmergeMe merge_insert(temp);
		}
	}
	catch (const char *e)
	{
		std::cout << e << std::endl;
	}
}