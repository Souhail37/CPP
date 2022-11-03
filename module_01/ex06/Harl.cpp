/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:11:07 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/03 16:45:21 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup ";
	std::cout << "burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*harl[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int			i = 0;

	while (complain[i] != level && i < 4)
		i++;
	switch (i)
	{
		case 0:
			(this->*harl[i])();
			std::cout << "\n";
			(this->*harl[i + 1])();
			std::cout << "\n";
			(this->*harl[i + 2])();
			std::cout << "\n";
			(this->*harl[i + 3])();
			break;
		case 1:
			(this->*harl[i])();
			std::cout << "\n";
			(this->*harl[i + 1])();
			std::cout << "\n";
			(this->*harl[i + 2])();
			break;
		case 2:
			(this->*harl[i])();
			std::cout << "\n";
			(this->*harl[i + 1])();
			break;
		case 3:
			(this->*harl[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ] \n";
			break;
	}
}