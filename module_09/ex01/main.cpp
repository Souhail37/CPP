/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:43:54 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/04 20:22:25 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	std::string	arg;

	if (ac == 2)
	{
		arg = av[1];
		try
		{
			RPN	rpn(arg);
		}
		catch (const char *e)
		{
			std::cout << e << std::endl;
		}
	}
	else
		std::cout << "Error" << std::endl;
}