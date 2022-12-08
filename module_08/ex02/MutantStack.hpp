/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:37:03 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/08 23:42:16 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <deque>

template<typename T >
class   MutantStack : public std::stack<T>
{
	public :
		typedef typename MutantStack<T>::container_type::iterator iterator;
		MutantStack()
		{}
		MutantStack(const MutantStack &mt)
		{
			*this = mt;
		}
		MutantStack	&operator=(const MutantStack &mt)
		{
			this->c = mt.c;
			return *this;
		}
		~MutantStack()
		{}
		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
};

#endif