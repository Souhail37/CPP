/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:25:39 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/01 14:42:25 by sismaili         ###   ########.fr       */
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
		std::ifstream	infs(name);
		std::ofstream	outfs(name + ".replace");
		std::string		s1(av[2]);
		std::string		s2(av[3]);
		std::string		copy;

		if (infs && outfs)
		{
			while(std::getline(infs, copy))
			{
				std::string tmp = copy;
				std::size_t	found = tmp.find(s1);
				std::string	str = tmp;
				while (found < tmp.length())
				{
					found += str.length() - tmp.length();
					str = copy.substr(0, found);
					str += s2;
					str += copy.substr(found + s1.length(), copy.length());
					tmp = str.substr(found + s2.length(), tmp.length());
					copy = str;
					found = tmp.find(s1);
				}
				outfs << copy << std::endl;
			}
		}
	}
	return (0);
}