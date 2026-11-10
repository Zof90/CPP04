/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:17:58 by schouite          #+#    #+#             */
/*   Updated: 2026/11/05 22:17:58 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <cstddef>
#define SIZE 4

Character::Character(const std::string &name) : ICharacter(), _name(name), _size(SIZE)
{
	_m = new AMateria *[4]();
	_floor = new AMateria *[4]();
}
Character::Character(const Character& other)
{
	*this = other;
}
Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{	
		clearRessources();
		copyRessources(other);	
	}
	return (*this);
}
Character::~Character()
{
	clearRessources();
}
const std::string &Character::getName() const
{
	return (_name);
}
void Character::equip(AMateria *m)
{
	unsigned int i = 0;
	while (i < SIZE)
	{
		if (!_m[i])
		{
			_m[i] = m;
			break;
		}
		i++;
	}
}
void Character::storeFloor(AMateria *m)
{
	unsigned int i;
	if (_floor[_size-1])
	{
		i = 0;
		_size *=2;
		AMateria **tmp = new AMateria*[_size]();
		while(i < _size)
		{
			tmp[i] = _floor[i];
			i++;
		}
	}
	i = 0;
	while (i < _size)
	{
		if (!_floor[i])
		{
			_floor[i] = m;
			break;
		}
		i++;
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && _m[idx])
	{
		storeFloor(_m[idx]);
		_m[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target) 
{
	if ((idx >= 0 || idx <= 3) && _m[idx])
	{
		_m[idx]->use(target);
	}
}
void Character::copyRessources(const Character& character)
{
	_m = new AMateria *[4]();
	_floor = new AMateria *[4]();
	unsigned int i = 0;
	_name = character._name;
	_size = character._size;
	while(i < SIZE)
	{
		if (!character._m[i])
			break;
		_m[i] = character._m[i];
		i++;
	}
}
void Character::clearRessources()
{
	unsigned int	i;

	i = 0;
	while (i < SIZE)
	{
		if (_m[i])
		{
			std::cout << "2" << std::endl;
			delete _m[i];
			std::cout << "1" << std::endl;
			_m[i] = NULL;
		}
		i++;
	}
	delete[] _m;
	i = 0;
	while (i < _size)
	{
		if (_floor[i])
		{
			delete _floor[i];
			_floor[i] = NULL;
		}
		i++;
	}
	delete[] _floor;
}
