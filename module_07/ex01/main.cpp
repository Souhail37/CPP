/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:21:58 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/07 15:50:40 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int	str[] = {1, 2, 3, 4};
	iter(str, 4, print);

	std::string str2[] = {"hello", "hello"};
	iter(str2, 2, print);

	char str3[] = {'a', 'b', 'c'};
	iter(str3, 3, print);
	return 0;
}
