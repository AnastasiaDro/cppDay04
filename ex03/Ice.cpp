//
// Created by  Anastasia on 09.10.2021.
//

#include "Ice.hpp"
#include "utils.hpp"

Ice::Ice() : AMateria("ice")  {
	printMsg("--ICE Default Constructor here");
}

Ice::Ice(const Ice &orig) {
	*this = orig;
	printMsg("--ICE Copy Constructor here");
}

Ice::~Ice() {
	printMsg("--ICE Destructor here");
}

Ice &Ice::operator=(const Ice &orig) {
	if (this == &orig)
		return *this;
	this->_type = orig.getType();
	return *this;
}

Ice *Ice::clone() const {
	Ice *newIce = new Ice;
	newIce->_type = this->getType();
	return newIce;
}

void Ice::use(ICharacter& &target) {}