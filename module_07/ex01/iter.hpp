/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:15:03 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/07 15:50:31 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	print(const T &i)
{
	std::cout << i << '\n';
}

template<typename T>
void	iter(T *arr, int len, void (*f)(const T&))
{
	for (int i = 0; i < len; i++)
   		f(arr[i]);
}

#endif