//
// Created by  Anastasia on 09.10.2021.
//

#include "Ice.hpp"
#include "utils.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")  {}

Ice::Ice(const Ice &orig) {
	*this = orig;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &orig) {
	if (this == &orig)
		return *this;
	this->_type = orig.getType();
	return *this;
}

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	printMsg( "* shoots an ice bolt at " + target.getName() + " *");
}