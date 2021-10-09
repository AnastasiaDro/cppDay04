//
// Created by  Anastasia on 09.10.2021.
//

#ifndef DAY04_CHARACTER_HPP
#define DAY04_CHARACTER_HPP


#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string _name;
public:
	Character();
	virtual ~Character();
};


#endif //DAY04_CHARACTER_HPP
