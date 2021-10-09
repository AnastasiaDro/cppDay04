//
// Created by  Anastasia on 09.10.2021.
//

#include "Cure.hpp"
#include "utils.hpp"
#include "ICharacter.hpp"


Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &orig)
{
	*this = orig;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &orig)
{
	if (this == &orig)
		return *this;
	this->_type = orig.getType();
	return *this;
}

Cure *Cure::clone() const {
	Cure *newCure = new Cure;
	newCure->_type = this->getType();
	return newCure;
}

void Cure::use(ICharacter &target) {
	printMsg("* heals " + target.getName() +  "’s wounds * ");
}
