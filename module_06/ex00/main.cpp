/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:56:52 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/05 11:29:10 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 2)
	{
		str = av[1];
		try
		{
			detect_type(str);
		}
		catch (const char* err)
		{
			std::cerr << err << std::endl;
		}
	}
	return 0;
}