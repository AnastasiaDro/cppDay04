//
// Created by  Anastasia on 09.10.2021.
//

#include "AMateria.hpp"
#include "utils.hpp"

AMateria::AMateria() : _type("AMateria") {
	printMsg("-AMATERIA Default Constructor here");
}

AMateria::AMateria(const std::string &type) : _type(type) {
	printMsg("-AMATERIA Type Constructor here");
}

AMateria::AMateria(const AMateria &orig) {
	*this = orig;
	printMsg("-AMATERIA Copy Constructor here");
}

AMateria::~AMateria() {
	printMsg("-AMATERIA Destructor here");
}

AMateria &AMateria::operator=(const AMateria &orig) {
	if (this == &orig)
		return *this;
	this->_type = orig.getType();
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &target) {
	printMsg("* AMateria doing something  at " + target.getName() + "*");
}

