/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:53:17 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 18:48:24 by sismaili         ###   ########.fr       */
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