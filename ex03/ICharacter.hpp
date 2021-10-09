//
// Created by  Anastasia on 09.10.2021.
//

#ifndef DAY04_ICHARACTER_HPP
#define DAY04_ICHARACTER_HPP


#include <string>
#include "IMateriaSource.hpp"

class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //DAY04_ICHARACTER_HPP
