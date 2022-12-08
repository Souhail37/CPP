/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:07:43 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 13:19:26 by sismaili         ###   ########.fr       */
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
	typename T::const_iterator it;
	it = std::find(first.cbegin(), first.cend(), i);
	if (it == first.end())
		throw "No occurrence is found";
	std::cout << "The number is found : " << *it << std::endl;
}

#endif