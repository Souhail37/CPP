/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:36:39 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/28 16:23:55 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected :
		std::string	type;
	public :
		Animal();
		Animal(const Animal &animal);
		Animal	&operator=(const Animal &animal);
		~Animal();
		virtual	std::string	getType() const;
		virtual void	makeSound() const;
};

#endif