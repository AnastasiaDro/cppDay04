//
// Created by Cesar Erebus on 10/3/21.
//

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	brain = new Brain;
	printMsg("DOG Default Constructor here");
}

//Copy constructor
Dog::Dog(const Dog &orig)
{
	*this = orig;
	printMsg("DOG Copy Constructor here");
}

//Desrtructor
Dog::~Dog(){
	printMsg("DOG Destructor here");
}

Dog &Dog::operator=(const Dog &orig) {
	this->_type = orig.getType();
	return *this;
}

void  Dog::makeSound() const{
	printMsg(this->_type + " says: \"Woof-woof!\"");
}

