/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:15:14 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 01:23:22 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i);
	std::cout << std::endl;
	try
	{
		easyfind(v, 2);
	}
	catch (const char *err)
	{
		std::cout << err << std::endl;
	}
}