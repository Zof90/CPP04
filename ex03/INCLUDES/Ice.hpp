/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 13:38:02 by schouite          #+#    #+#             */
/*   Updated: 2026/11/05 13:38:02 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
class Ice : public AMateria
{
  public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif