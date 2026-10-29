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

#include "WrongCat.hpp"
// #include "Dog.hpp"i
#include <WrongAnimal.hpp>
#include <iostream>

int	main(void)
{
	const WrongAnimal	*meta = new WrongAnimal();
	const WrongAnimal	*i = new WrongCat;

	// const Animal	*j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	meta->makeSound();
	return (0);
}
