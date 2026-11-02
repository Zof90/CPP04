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

Brain::Brain()
{
	std::cout << "Brain construcotr" << std::endl;
}
Brain::Brain(const Brain &other)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		this->_idea[i] = other._idea[i];
		i++;
	}
}
Brain &Brain::operator=(const Brain &other)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		this->_idea[i] = other._idea[i];
		i++;
	}
	return (*this);
}
Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}