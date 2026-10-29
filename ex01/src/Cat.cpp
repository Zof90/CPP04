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

#include "Cat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor" << std::endl;
	_type = "Cat";
}
Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor" << std::endl;
	_type = other._type;
}
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignement" << std::endl;
	_type = other._type;
	return (*this);
}
void Cat::makeSound() const
{
	std::cout << "miew miew" << std::endl;
}