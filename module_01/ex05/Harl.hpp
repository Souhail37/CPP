/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:32:07 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/02 12:42:15 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
	public :
		void	complain(std::string level);
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif