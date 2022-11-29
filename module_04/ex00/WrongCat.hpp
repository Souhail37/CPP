/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:03:25 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/29 17:08:46 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat &Wcat);
		WrongCat	&operator=(const WrongCat &Wcat);
		~WrongCat();
		std::string	getType() const;
		void	makeSound() const;
};

#endif