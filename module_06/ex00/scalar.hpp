/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:29:55 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/04 22:33:57 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>

int	is_char(std::string str);
bool	is_int(std::string str);
bool	is_float(std::string str);
int	is_double(std::string str);
int	detect_type(std::string str);

#endif