/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:21:37 by schouite          #+#    #+#             */
/*   Updated: 2026/11/09 16:21:37 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "iostream"

int	main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	ICharacter *test = new Character("test");
	AMateria *tmp;
	AMateria *TestUnqipe;
	tmp = src->createMateria("ice");

	// save pointer for unequip test
	TestUnqipe = tmp;
	test->equip(TestUnqipe);
	////////////////
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// test inexistante AMateria
	tmp = src->createMateria("false");
	me->equip(tmp);
	///////////////
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	// test tab[] > 3 = print nothing (no bugs)
	me->use(4, *bob);
	// tester unequip 
	me->unequip(0);
	// print nothing
	me->use(0, *bob);
	// proof Amateria not delete after unequip
	std::cout << "testUnquip" << std::endl;
	test->use(0,*bob);
	///////////////////
	// delete bob;
	delete me;
	// delete test;
	delete src;
	return (0);
}