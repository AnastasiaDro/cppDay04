//
// Created by Cesar Erebus on 10/3/21.
//

#include "WrongAnimal.hpp"


//Constructors
WrongAnimal::WrongAnimal() {
	_type = "WrongAnimal";
	printMsg("WRONG_ANIMAL Default Constructor here");
}

WrongAnimal::WrongAnimal(std::string &_type) {
	this->_type = _type;
	printMsg("WRONG_ANIMAL Type Constructor here");
}

//Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &orig) {
	*this = orig;
	printMsg("WRONG_ANIMAL Copy Constructor here");
}

//Destructor
WrongAnimal::~WrongAnimal() {
	printMsg("WRONG_ANIMAL Destructor here");
}

const std::string &WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	printMsg(this->_type + " says: *unintelligible roar*");
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &orig) {
	this->_type = orig.getType();
	return *this;
}

