/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:46:34 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/26 12:36:22 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public :
		void	announce();
		void	set(std::string _name);
		Zombie();
		~Zombie();
	private :
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif