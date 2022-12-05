/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:38:24 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/05 12:54:14 by sismaili         ###   ########.fr       */
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
	Data	*ptr;

	if(deserialize(serialize(ptr)) == ptr)
	{
		std::cout << "Equals" << std::endl;
	}
	else
		std::cout << "not Equals" << std::endl;
}