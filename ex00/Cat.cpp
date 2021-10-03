//
// Created by Cesar Erebus on 10/3/21.
//

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	printMsg("CAT Default Constructor here");
}

//Copy constructor
Cat::Cat(const Cat &orig)
{
	*this = orig;
	printMsg("CAT Copy Constructor here");
}

//Desrtructor
Cat::~Cat(){
	printMsg("CAT Destructor here");
}

Cat &Cat::operator=(const Cat &orig) {
	if (this == &orig)
		return *this;
	this->_type = orig.getType();
	return *this;
}

void Cat::makeSound() const{
	printMsg(this->_type +  " says: \"Meow-meow!\"");
}
