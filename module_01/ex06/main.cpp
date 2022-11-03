/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:35:19 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/03 16:03:56 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		instance;

	if (ac == 2)
	{
		instance.complain(av[1]);
		std::cout << std::endl;
		// instance.complain("INFO");
		// std::cout << std::endl;
		// instance.complain("WARNING");
		// std::cout << std::endl;
		// instance.complain("ERROR");
	}
}
