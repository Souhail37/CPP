/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:07:43 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 01:20:38 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

template<typename T>
void	easyfind(T first, int i)
{
	std::vector<int>::const_iterator it;
	it = std::find(first.begin(), first.end(), i);
	if (it == first.end())
		throw "No occurrence is found";
	std::cout << "The number is found : " << *it << std::endl;
}

#endif