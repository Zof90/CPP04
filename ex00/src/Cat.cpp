/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:50:20 by schouite          #+#    #+#             */
/*   Updated: 2026/10/27 16:50:20 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	_type = "Cat";
}
Cat::~Cat()
{
}
Cat::Cat(const Cat &other) : Animal(other)
{
	_type = other._type;
}
Cat &Cat::operator=(const Cat &other)
{
	_type = other._type;
	return (*this);
}
void Cat::makeSound() const
{
	std::cout << "miew miew" << std::endl;
}