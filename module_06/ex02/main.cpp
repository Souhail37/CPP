/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:14:10 by sismaili          #+#    #+#             */
/*   Updated: 2022/12/05 15:18:20 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
// #include "A.hpp"
// #include "B.hpp"
// #include "C.hpp"

int	main()
{
	Base	*p = generate();
	identify(p);
	identify(*p);
}