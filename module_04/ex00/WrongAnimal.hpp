/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:00:40 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:08:39 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	protected :
		std::string	type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &Wanimal);
		WrongAnimal	&operator=(const WrongAnimal &Wanimal);
		~WrongAnimal();
		std::string	getType() const;
		void	makeSound() const;
};

#endif