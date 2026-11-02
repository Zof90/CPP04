/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:50:23 by schouite          #+#    #+#             */
/*   Updated: 2026/10/27 16:50:23 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal()
{
	_brain = new Brain;
	std::cout << "Dog constructor" << std::endl;
	_type = "Dog";
}
Dog::~Dog()
{
	delete	_brain;

	std::cout << "Dog destructor" << std::endl;
}
Dog::Dog(const Dog &other) : Animal(other)
{
	_type = other._type;
}
Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "hew hew" << std::endl;
}