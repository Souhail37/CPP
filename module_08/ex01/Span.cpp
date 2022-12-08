/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:24:50 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 23:28:53 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span &s)
{
	*this = s;
}

Span	&Span::operator=(const Span &s)
{
	this->N = s.N;
	this->v = s.v;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (this->N > this->v.size())
		this->v.push_back(n);
	else
		throw "There are already N elements strored";
}

void	Span::addMult(iterator start, iterator end)
{
	int	size = end - start;
	if (size + this->v.size() > this->N)
		throw "You can't add this numbers";
	while (start != end)
	{
		this->v.push_back(*start);
		start++;
	}
}

int	Span::shortestSpan()
{
	int	i;
	std::vector<int>::iterator it;

	if (this->v.size() < 2)
		throw "No span can be found";
	it = this->v.begin();
	i = std::abs(*it - (*(it + 1)));
	it++;
	while (it != this->v.end())
	{
		if (std::abs(*it - (*(it + 1))) < i && it + 1 != this->v.end())
			i = std::abs(*it - *(it + 1));
		it++;
	}
	return i;
}

int	Span::longestSpan()
{
	std::vector<int>::iterator it1;
	std::vector<int>::iterator it2;

	it1 = std::max_element(std::begin(this->v), std::end(this->v));
	it2 = std::min_element(std::begin(this->v), std::end(this->v));
	return (std::abs(*it1 - *it2));
}