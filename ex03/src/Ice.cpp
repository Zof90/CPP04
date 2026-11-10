/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:27:28 by schouite          #+#    #+#             */
/*   Updated: 2026/11/09 16:27:28 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice():AMateria("ice")
{
}
Ice::~Ice()
{
}
Ice::Ice(const Ice& other) : AMateria(other)
{
}
Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
        _type = other._type;
    return(*this);
}

AMateria* Ice::clone() const
{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
