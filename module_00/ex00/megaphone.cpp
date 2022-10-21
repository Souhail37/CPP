/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:33:52 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/21 10:02:07 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int	i = 1;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				av[i][j] = toupper(av[i][j]);
				std::cout << av[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
    return (0);
}
