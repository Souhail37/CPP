/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:03:14 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/25 10:42:34 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	public :
		void	add();
		void	search();
		void	search_fn(int n);
		void	search_ln(int n);
		void	search_nn(int n);
		void	search_pn(int n);
		void	search_ds(int n);
		void	contact_info();
	private :
		Contact	contacts[8];
};

#endif