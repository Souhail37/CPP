/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:25:39 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/04 13:08:44 by sismaili         ###   ########.fr       */
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
		std::string		s1(av[2]);
		std::string		s2(av[3]);
		std::string		copy;

		if (s1.empty())
			return (0);
		if (infs)
		{
			std::ofstream	outfs(name + ".replace");
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