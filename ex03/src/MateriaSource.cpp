/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 01:37:02 by schouite          #+#    #+#             */
/*   Updated: 2026/11/10 01:37:02 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <cstddef>
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#define SIZE 4

MateriaSource::MateriaSource():IMateriaSource()
{
    _slot = new AMateria*[SIZE]();
}
MateriaSource::MateriaSource(const MateriaSource &other):IMateriaSource()
{
    *this = other;
}
MateriaSource::~MateriaSource()
{
    clearRessources();
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        clearRessources();
        copyRessources(other);
    }
    return(*this);
}
void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    if (!m)
        return;
    while (i < SIZE)
    {
        if (!_slot[i])
        {
            _slot[i] = m;
            break;
        }
        i++;
    }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < SIZE)
    {
        if (!_slot[i])
            return(NULL);
        else if (_slot[i]->getType() == type)
            break;
        i++;
    }
    return (_slot[i]->clone());
}

void MateriaSource::copyRessources(const MateriaSource& materiaSource)
{
    unsigned i = 0;
    _slot = new AMateria*[4];
	while(i < SIZE)
	{
		if (!materiaSource._slot[i])
            break;
		_slot[i] = materiaSource._slot[i];
		i++;
	}
}
void MateriaSource::clearRessources()
{
	unsigned int	i;

	i = 0;
	while (i < SIZE)
	{
		if (_slot[i])
        {
			delete _slot[i];
            _slot[i] = NULL;
        }
		i++;
	}
	delete[] _slot;
}