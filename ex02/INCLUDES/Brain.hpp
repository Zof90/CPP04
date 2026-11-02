/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:43:25 by schouite          #+#    #+#             */
/*   Updated: 2026/10/30 15:43:25 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>
#define SIZE 100
class Brain 
{
    public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    private:
        std::string _idea[100];
};

#endif