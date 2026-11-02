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

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define LEN 10
int	main(void)
{
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();
	Animal **p = new Animal*[LEN];
	int i = 0;

	delete cat;	
	delete dog;
	while (i < LEN)
	{
		p[i++] = new Cat;
		if (i == LEN)
			break;
		p[i++] = new Dog;
	}
	i = 0;
	while(i < LEN)
	{
		delete p[i++];
	}
	delete[] p;
	return (0);
}
