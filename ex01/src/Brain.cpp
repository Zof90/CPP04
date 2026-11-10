/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:11:38 by schouite          #+#    #+#             */
/*   Updated: 2026/10/30 16:11:38 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

#define IDEA_LEN 100

Brain::Brain()
{
	_idea = new std::string[IDEA_LEN]();
	std::cout << "Brain construcotr" << std::endl;
}
Brain::Brain(const Brain &other)
{
	copyRessource(other);
	std::cout << "Brain copy constructor" << std::endl;
}
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
		copyRessource(other);
	return (*this);
}
Brain::~Brain()
{
	delete [] _idea;
	std::cout << "Brain destructor" << std::endl;
}

void Brain::copyRessource(const Brain& other)
{
	int	i;

	i = 0;
	while (i < IDEA_LEN)
	{
		if (&other._idea[i])
			_idea[i] = other._idea[i];
		i++;
	}
}