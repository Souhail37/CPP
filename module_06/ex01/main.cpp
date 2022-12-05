/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:38:24 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/05 12:36:53 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	convert;
	convert = reinterpret_cast<uintptr_t>(ptr);
	return convert;
}

Data*	deserialize(uintptr_t raw)
{
	Data*	convert;
	convert = reinterpret_cast<Data *>(raw);
	return convert;
}

int	main()
{
	uintptr_t	test;
	Data	*ok;

	ok->a = 5;
	ok->b = 'c';
	test = serialize(ok);
	std::cout << ok->a << std::endl;
	std::cout << &ok << std::endl;
	ok = NULL;
	ok = deserialize(test);
	std::cout << ok->a << std::endl;
	std::cout << &ok << std::endl;
}