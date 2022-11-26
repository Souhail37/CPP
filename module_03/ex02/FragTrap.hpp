/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:05:38 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/26 15:17:32 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(const FragTrap &ft);
		FragTrap(std::string Name);
		FragTrap	&operator=(const FragTrap &ft);
		~FragTrap();
		void	attack(const std::string &targer);
		void	highFivesGuys(void);
};

#endif