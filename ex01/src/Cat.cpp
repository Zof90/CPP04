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
#include "Brain.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	_brain = new Brain;
	_type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}
Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor" << std::endl;
	_type = other._type;
	_brain = new Brain(*other._brain);
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}
void Cat::makeSound() const
{
	std::cout << "miew miew" << std::endl;
}