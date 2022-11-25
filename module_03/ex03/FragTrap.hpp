/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:14:31 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/25 23:37:51 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap &ft);
		FragTrap(std::string Name);
		FragTrap	&operator=(const FragTrap &ft);
		~FragTrap();
		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif