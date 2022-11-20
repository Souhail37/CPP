/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:00:28 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/17 20:08:05 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private :
		int					value;
		static const int	number = 8;
	public :
		Fixed ();
		Fixed (const Fixed &f);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();
		Fixed(const int n);
		Fixed(const float f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif