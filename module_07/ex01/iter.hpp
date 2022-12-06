/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:15:03 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/07 00:38:20 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	add_one(T i)
{
	i += 1;
	std::cout << i << '\n';
}

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T))
{
	for (size_t i = 0; i < len; i++)
   		f(arr[i]);
}

#endif