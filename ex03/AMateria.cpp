//
// Created by  Anastasia on 09.10.2021.
//

#include "AMateria.hpp"
#include "utils.hpp"

AMateria::AMateria() : _type("AMateria") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &orig) {
	*this = orig;
}

AMateria::~AMateria() {}

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

