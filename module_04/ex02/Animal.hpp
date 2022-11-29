/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:18:13 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 16:19:02 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	AAnimal
{
	protected :
		std::string	type;
	public :
		AAnimal();
		AAnimal(const AAnimal &animal);
		AAnimal	&operator=(const AAnimal &animal);
		virtual ~AAnimal();
		virtual	std::string	getType() const;
		virtual void	makeSound() const = 0;
};

#endif