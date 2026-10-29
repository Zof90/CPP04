/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 18:04:53 by schouite          #+#    #+#             */
/*   Updated: 2026/10/27 18:04:53 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}
Animal::~Animal()
{
}
Animal::Animal(const Animal &other)
{
	_type = other._type;
}
Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	return (*this);
}

const std::string &Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
}