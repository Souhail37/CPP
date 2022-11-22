/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:04:35 by sismaili          #+#    #+#             */
/*   Updated: 2022/11/22 23:08:15 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return *this;
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	temp;

	temp.value = this->value + fixed.value;
	return temp;
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	temp;

	temp.value = this->value - fixed.value;
	return temp;
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed		temp;
	long long	l;

	l = (long long)this->value * fixed.value;
	temp.value = l >> this->number;
	return (temp);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	temp;

	if (fixed.value != 0)
	{
		temp.value = this->value / fixed.value;
		temp.value = temp.value << this->number;
	}
	return temp;
}

Fixed	&Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	this->value++;
	return temp;
}

Fixed	&Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	this->value--;
	return temp;
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return this->value > fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return !(this->value > fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return this->value >= fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return !(operator>=(fixed));
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	return this->value == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	return !(operator==(fixed));
}

int	Fixed::getRawBits() const
{
	return this->value;
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = n << this->number;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f * (1 << this->number));
}

int		Fixed::toInt() const
{
	return (this->value >> this->number);
}

float	Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << this->number));	
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	Fixed &comp = (f1 < f2) ? f1 : f2;
	return (comp);
}

Fixed const	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	Fixed const &comp = (f1 < f2) ? f1 : f2;
	return (comp);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	Fixed &comp = (f1 > f2) ? f1 : f2;
	return (comp);
}

Fixed const	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	Fixed const &comp = (f1 > f2) ? f1 : f2;
	return (comp);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	return o << i.toFloat();
}
