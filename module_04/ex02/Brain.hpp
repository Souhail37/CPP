/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:25 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 14:18:26 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	private :
		std::string ideas[100];
	public :
		Brain();
		Brain(const Brain &brain);
		Brain	&operator=(const Brain &brain);
		~Brain();
};

#endif