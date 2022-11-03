/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:35:19 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/03 15:23:04 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	instance;

	instance.complain("DEBUG");
	std::cout << std::endl;
	instance.complain("INFO");
	std::cout << std::endl;
	instance.complain("WARNING");
	std::cout << std::endl;
	instance.complain("ERROR");
}