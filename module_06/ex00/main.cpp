/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:56:52 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/04 20:43:48 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 2)
	{
		str = av[1];
		if (!detect_type(str))
			std::cout << "Unknown type" << std::endl;
	}
	return 0;
}