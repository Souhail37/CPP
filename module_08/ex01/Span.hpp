/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:00:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 16:30:54 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cmath>
#include <algorithm>
#include <list>
#include <vector>

class	Span
{
	private :
		unsigned int N;
		std::vector<int> v;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span &s);
		Span	&operator=(const Span &s);
		~Span();
		void	addNumber(int n);
		int	shortestSpan();
		int	longestSpan();
};

#endif