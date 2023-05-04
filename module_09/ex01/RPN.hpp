/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:23:49 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/04 19:52:44 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
	private:
		std::stack<int>	rpn;
		int	number;
		int	first_tmp;
		int	second_tmp;
	public:
		RPN();
		RPN(const RPN &copy);
		RPN	&operator=(const RPN &copy);
		~RPN();
		RPN(std::string &arg);
		bool	Number_check(char c);
		void	plus_operator();
		void	minus_operator();
		void	multip_operator();
		void	division_operator();
};

#endif