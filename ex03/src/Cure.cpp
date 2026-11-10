/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 01:35:49 by schouite          #+#    #+#             */
/*   Updated: 2026/11/09 01:35:49 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure():AMateria("cure")
{
}
Cure::~Cure()
{
}
Cure::Cure(const Cure& other) : AMateria(other)
{
    *this = other;
}
Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
        _type = other._type;
    return(*this);
}

AMateria* Cure::clone() const
{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl ;
}
