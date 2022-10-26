/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:12:08 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/26 11:02:22 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public :
		void	announce(void);
		Zombie(std::string _name);
		~Zombie();
	private :
		std::string	name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif