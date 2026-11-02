/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:10:30 by schouite          #+#    #+#             */
/*   Updated: 2026/10/29 14:10:30 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor" << std::endl;
	_type = "WrongCat";
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	_type = other._type;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	_type = other._type;
	return (*this);
}
void WrongCat::makeSound() const
{
	std::cout << "WrongCat song" << std::endl;
}