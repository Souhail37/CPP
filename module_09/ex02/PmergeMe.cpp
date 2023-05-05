/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:18:10 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/05 22:48:22 by sismaili         ###   ########.fr       */
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

void	PmergeMe::insertion_vector(std::vector<int> &v_sort)
{
	for (std::size_t i = 1; i < v_sort.size(); i++)
	{
		int	temp = v_sort[i];
		int	j = i - 1;
		while (j >= 0 && v_sort[j] > temp)
		{
			v_sort[j + 1] = v_sort[j];
			j--;
		}
		v_sort[j + 1] = temp;
	}
}

void	PmergeMe::insertion_deque(std::deque<int> &d_sort)
{
	for (std::size_t i = 1; i < d_sort.size(); i++)
	{
		int	temp = d_sort[i];
		int	j = i - 1;
		while (j >= 0 && d_sort[j] > temp)
		{
			d_sort[j + 1] = d_sort[j];
			j--;
		}
		d_sort[j + 1] = temp;
	}
}

void	PmergeMe::merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &d_sort)
{
	int	left_size = d_sort.size() / 2;
	int	right_size = d_sort.size() - left_size;
	int	i = 0, l = 0, r = 0;

	while (l < left_size && r < right_size)
	{
		if (left[l] < right[r])
		{
			d_sort[i] = left[l];
			i++;
			l++;
		}
		else
		{
			d_sort[i] = right[r];
			i++;
			r++;
		}
	}
	while (l < left_size)
	{
		d_sort[i] = left[l];
		i++;
		l++;
	}
	while (r < right_size)
	{
		d_sort[i] = right[r];
		i++;
		r++;
	}
}

void	PmergeMe::merge_deque(std::deque<int> &d_sort)
{
	int	length = d_sort.size();
	if (length <= 15)
	{
		insertion_deque(d_sort);	
		return ;
	}
	int	middle = length / 2;
	std::deque<int> left;
	std::deque<int> right;
	int	j = 0;

	for (int i = 0; i < length; i++)
	{
		if (i < middle)
			left.push_back(d_sort[i]);
		else
		{
			right.push_back(d_sort[i]);
			j++;
		}
	}
	merge_deque(left);
	merge_deque(right);
	merge(left, right, d_sort);
}

void	PmergeMe::merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &v_sort)
{
	int	left_size = v_sort.size() / 2;
	int	right_size = v_sort.size() - left_size;
	int	i = 0, l = 0, r = 0;

	while (l < left_size && r < right_size)
	{
		if (left[l] < right[r])
		{
			v_sort[i] = left[l];
			i++;
			l++;
		}
		else
		{
			v_sort[i] = right[r];
			i++;
			r++;
		}
	}
	while (l < left_size)
	{
		v_sort[i] = left[l];
		i++;
		l++;
	}
	while (r < right_size)
	{
		v_sort[i] = right[r];
		i++;
		r++;
	}
}

void	PmergeMe::merge_vector(std::vector<int> &v_sort)
{
	int	length = v_sort.size();
	if (length <= 15)
	{
		insertion_vector(v_sort);	
		return ;
	}
	int	middle = length / 2;
	std::vector<int> left;
	std::vector<int> right;
	int	j = 0;

	for (int i = 0; i < length; i++)
	{
		if (i < middle)
			left.push_back(v_sort[i]);
		else
		{
			right.push_back(v_sort[i]);
			j++;
		}
	}
	merge_vector(left);
	merge_vector(right);
	merge(left, right, v_sort);
}

PmergeMe::PmergeMe(std::vector<std::string> &temp)
{
	clock_t	v_time;
	clock_t	d_time;
	double v_end;
	double d_end;

	std::cout << "Before:";
	for (std::size_t i = 0; i != temp.size(); i++)
	{
		v_sort.push_back(atoi(temp[i].c_str()));
		d_sort.push_back(atoi(temp[i].c_str()));
		std::cout << " " << temp[i];
	}
	std::cout << std::endl;
	if (temp.size() < 15)
	{
		v_time = clock();
		insertion_vector(v_sort);
		v_end = (double)(clock() - v_time) / CLOCKS_PER_SEC;
		d_time = clock();
		insertion_deque(d_sort);
		d_end = (double)(clock() - d_time) / CLOCKS_PER_SEC;
	}
	else
	{
		v_time = clock();
		merge_vector(v_sort);
		v_end = (double)(clock() - v_time) / CLOCKS_PER_SEC;
		d_time = clock();
		merge_deque(d_sort);
		d_end = (double)(clock() - d_time) / CLOCKS_PER_SEC;
	}
	std::cout << "After:";
	for (std::size_t i = 0; i != v_sort.size(); i++)
	{
		std::cout << " " << v_sort[i];
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << v_sort.size() << " elements with std::vector : " << std::fixed << v_end << " us" << std::endl;
	std::cout << "Time to process a range of " << d_sort.size() << " elements with std::deque : " << std::fixed << d_end << " us" << std::endl;
}
