/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:25:39 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/01 13:31:13 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string		name = av[1];
		std::ifstream	firstfs(name);
		std::ofstream	secondfs(name + ".replace");
		std::string		s1(av[2]);
		std::string		s2(av[3]);
		std::string		copy;
		std::string		str;
		std::size_t		found;
		std::size_t		i;

		if (firstfs && secondfs)
		{
			while(std::getline(firstfs, copy))
			{
				std::string tmp = copy;
				found = tmp.find(s1);
				str = tmp;
				while (found < tmp.length())
				{
					found += str.length() - tmp.length();
					std::cout << found << std::endl;
					str = copy.substr(0, found);
					str += s2;
					i = found + s1.length();
					str += copy.substr(i, copy.length());
					tmp = str.substr(found + s2.length(), tmp.length());
					std::cout << tmp << std::endl;
					copy = str;
					found = tmp.find(s1);
				}
				secondfs << copy << std::endl;
			}
		}
	}
	return (0);
}