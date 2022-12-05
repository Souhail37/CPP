/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:03:11 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/05 15:19:47 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base	*generate(void)
{
	Base *tmp = 0;
	srand(time(0));
	int	random = rand() % 3;
	if (random == 0)
		tmp = new A();
	else if (random == 1)
		tmp = new B();
	else if (random == 2)
		tmp = new C();
	return (tmp);
}

void	identify(Base* p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "The object pointed to by p : A" << std::endl;
	else if (b)
		std::cout << "The object pointed to by p : B" << std::endl;
	else if (c)
		std::cout << "The object pointed to by p : C" << std::endl;
	else
		std::cout << "No object is identified" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << "The object pointed to by p : A" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << "The object pointed to by p : B" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << "The object pointed to by p : C" << std::endl;
	}
	catch(const std::exception& e)
	{
	}
	
	
}