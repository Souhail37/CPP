/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:32:27 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/04 20:11:47 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN	&RPN::operator=(const RPN &copy)
{
	rpn = copy.rpn;
	first_tmp = copy.first_tmp;
	second_tmp = copy.second_tmp;
	number = copy.number;
	return *this;
}

RPN::~RPN()
{
}

void	RPN::plus_operator()
{
	second_tmp = rpn.top();
	rpn.pop();
	first_tmp = rpn.top();
	rpn.pop();
	rpn.push(first_tmp + second_tmp);
}

void	RPN::minus_operator()
{
	second_tmp = rpn.top();
	rpn.pop();
	first_tmp = rpn.top();
	rpn.pop();
	rpn.push(first_tmp - second_tmp);
}

void	RPN::multip_operator()
{
	second_tmp = rpn.top();
	rpn.pop();
	first_tmp = rpn.top();
	rpn.pop();
	rpn.push(first_tmp * second_tmp);
}

void	RPN::division_operator()
{
	if (rpn.top() == 0)
		throw "Error";
	second_tmp = rpn.top();
	rpn.pop();
	first_tmp = rpn.top();
	rpn.pop();
	rpn.push(first_tmp / second_tmp);
}

bool	RPN::Number_check(char c)
{
	if (!isdigit(c) && c != '+' && c != '-' && c != '*' && c != '/')
		return false;
	else if (isdigit(c))
	{
		number = c - '0';
		rpn.push(number);
	}
	else
	{
		if (rpn.size() >= 2)
		{
			if (c == '+')
				plus_operator();
			else if (c == '-')
				minus_operator();
			else if (c == '*')
				multip_operator();
			else if (c == '/')
				division_operator();
		}
		else
			return false;
	}
	return true;
}

RPN::RPN(std::string &arg)
{
	int	checker = 0;

	for(std::size_t i = 0; i < arg.length(); i++)
	{
		if (arg[i] == ' ')
		{
			checker = 0;
			continue;
		}
		else
		{
			checker++;
			if (!Number_check(arg[i]) || checker > 1)
				throw "Error";
		}
	}
	if (rpn.size() != 1)
		throw "Error";
	std::cout << rpn.top() << std::endl;
}