/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:10:45 by schouite          #+#    #+#             */
/*   Updated: 2026/10/29 14:10:45 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
}
WrongAnimal::~WrongAnimal()
{
}
WrongAnimal ::WrongAnimal(const WrongAnimal &other)
{
	_type = other._type;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	_type = other._type;
	return (*this);
}

const std::string &WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal song" << std::endl;
}
