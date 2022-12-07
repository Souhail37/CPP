/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:40:40 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/07 14:39:58 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class	Array
{
	private :
		T	*elements;
		unsigned int	e_size;
	public :
		Array()
		{
			elements = new T();
			e_size = 0;
		};
		Array(unsigned int n)
		{
			elements = new T[n];
			e_size = n;
			for (unsigned int i = 0; i < n; i++)
				elements[i] = 0;
		}
		Array(const Array &a)
		{
			*this = a;
		}
		Array	&operator=(const Array &a)
		{
			delete [] elements;
			elements = new T[a.e_size];
			e_size = a.e_size;
			for (unsigned int i = 0; i < e_size; i++)
				elements[i] = a.elements[i];
			return *this;
		}
		~Array()
		{
			delete [] elements;
		}
		T	&operator[](unsigned int index)
		{
			if (index < e_size)
				return elements[index];
			else
				throw "Index is out of bounds";
		}
		unsigned int	size() const
		{
			return this->e_size;
		}
};

#endif