/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 23:14:34 by sismaili          #+#    #+#             */
/*   Updated: 2023/05/05 22:32:48 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <time.h>

class PmergeMe
{
	private:
		std::vector<int> v_sort;
		std::deque<int> d_sort;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();
		PmergeMe(std::vector<std::string> &temp);
		void	insertion_vector(std::vector<int> &v_sort);
		void	insertion_deque(std::deque<int> &d_sort);
		void	merge_vector(std::vector<int> &v_sort);
		void	merge_deque(std::deque<int> &d_sort);
		void	merge(std::vector<int> &left, std::vector<int> &right, std::vector<int> &v_sort);
		void	merge(std::deque<int> &left, std::deque<int> &right, std::deque<int> &d_sort);
};

#endif