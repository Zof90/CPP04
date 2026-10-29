/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:10:54 by schouite          #+#    #+#             */
/*   Updated: 2026/10/29 14:10:54 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
  public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);
	const std::string &getType() const;
	virtual void makeSound() const;

  protected:
	std::string _type;
};
#endif