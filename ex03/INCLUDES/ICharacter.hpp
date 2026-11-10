/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:03:48 by schouite          #+#    #+#             */
/*   Updated: 2026/11/03 16:03:48 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include "AMateria.hpp"
# include <string>

class ICharacter
{
  public:
	// ICharacter();
    // ICharacter(const std::string& name);
	// ICharacter(const ICharacter &other);
	// ICharacter &operator=(const ICharacter &other);
	virtual ~ICharacter(){};
	virtual std::string const  &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif