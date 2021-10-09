//
// Created by  Anastasia on 09.10.2021.
//

#ifndef DAY04_CHARACTER_HPP
#define DAY04_CHARACTER_HPP


#include "ICharacter.hpp"
#include <string>

class Character : public ICharacter {
private:
	std::string _name;
	AMateria **materias;
	static const int materNum = 4;
    int capacity;
    Character();
public:
    Character(std::string name);
	virtual ~Character();
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};


#endif //DAY04_CHARACTER_HPP
