/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:18:10 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/04 23:20:15 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	v_sort = copy.v_sort;
	d_sort = copy.d_sort;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &copy)
{
	v_sort = copy.v_sort;
	d_sort = copy.d_sort;
	return *this;
}

PmergeMe::~PmergeMe()
{
}