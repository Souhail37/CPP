/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:10:20 by sismaili          #+#    #+#             */
/*   Updated: 2022/10/24 10:57:19 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>

class	Contact
{
	public :
		void	setfirst_name(std::string first_name);
		void	setlast_name(std::string last_name);
		void	setnickname(std::string nickname);
		void	setphone_number(std::string phone_number);
		void	setdarkest_secret(std::string darkest_secret);

		std::string	getfirst_name() const;
		std::string	getlast_name() const;
		std::string	getnickname() const;
		std::string	getphonenumber() const;
		std::string	getdarkest_secret() const;

	private :
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

#endif