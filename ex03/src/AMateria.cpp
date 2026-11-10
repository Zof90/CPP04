/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:55:32 by schouite          #+#    #+#             */
/*   Updated: 2026/11/05 15:55:32 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>

AMateria::AMateria()
{
}
AMateria::AMateria(const std::string &type) : _type(type)
{
}
AMateria::~AMateria()
{
}
AMateria::AMateria(const AMateria &other)
{
	*this = other;
}
AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}
const std::string &AMateria::getType(void) const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}