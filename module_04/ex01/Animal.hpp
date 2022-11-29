/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:50:23 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:32:23 by sismaili         ###   ########.fr       */
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
		virtual ~Animal();
		virtual	std::string	getType() const;
		virtual void	makeSound() const;
};

#endif