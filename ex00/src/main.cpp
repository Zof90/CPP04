/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:50:25 by schouite          #+#    #+#             */
/*   Updated: 2026/10/27 16:50:25 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <WrongAnimal.hpp>
#include <iostream>

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); // will output the cat sound! j->
	delete meta;
	delete i;
	delete j;
	// const WrongAnimal	*wronganimal = new WrongAnimal();
	// const WrongAnimal	*wrongcat = new WrongCat;
	// std::cout << wrongcat->getType() << " " << std::endl;
	// wrongcat->makeSound(); // will output the Wrong animal sound! j->
	// delete wronganimal;
	// delete wrongcat;
	return (0);
}
