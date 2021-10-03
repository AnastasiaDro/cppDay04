//
// Created by Cesar Erebus on 10/3/21.
//

#include "Animal.hpp"


//Constructors
Animal::Animal() {
	_type = "Animal";
	printMsg("ANIMAL Default Constructor here");
}

Animal::Animal(std::string &_type) {
	this->_type = _type;
	printMsg("ANIMAL Type Constructor here");
}

//Copy constructor
Animal::Animal(const Animal &orig) {
	*this = orig;
	printMsg("ANIMAL Copy Constructor here");
}

//Destructor
Animal::~Animal() {
	printMsg("ANIMAL Destructor here");
}

const std::string &Animal::getType() const {
	return _type;
}

void Animal::makeSound() const{
	printMsg(this->_type + " says: *unintelligible roar*");
}

Animal &Animal::operator=(const Animal &orig) {
	this->_type = orig.getType();
	return *this;
}

void	printMsg(std::string const &msg)
{
	std::cout << msg << std::endl;
}

