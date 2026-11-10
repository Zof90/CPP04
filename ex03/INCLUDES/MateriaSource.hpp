/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:48:49 by schouite          #+#    #+#             */
/*   Updated: 2026/11/07 16:48:49 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MateriaSource_HPP
# define MateriaSource_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
  public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	~MateriaSource();
	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);

  private:
	void clearRessources();
	void copyRessources(const MateriaSource &materiaSource);
    AMateria **_slot;
};

#endif