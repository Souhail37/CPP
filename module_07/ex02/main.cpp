/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:59:33 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/07 15:42:40 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		Array<int>	arr(5);
		
		std::cout << "arr = ";
		for (unsigned int i = 0; i < arr.size(); i++)
		{
			arr[i] = i + 1;
			std::cout << arr[i] << " ";
		}
		Array<int>	arr2(arr);

		std::cout << std::endl;
		std::cout << "arr2 = ";
		for (unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << " ";

		for (unsigned int i = 0; i < arr.size(); i++)
			arr[i] = i * i;
		
		std::cout << std::endl;
		std::cout << "arr = ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		
		std::cout << std::endl;
		std::cout << "arr2 = ";
		for (unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << " ";
	}
	catch (std::exception &err)
	{
		std::cerr << err.what() << std::endl;
	}
	return 0;
}

