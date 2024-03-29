//
// Created by Cesar Erebus on 10/3/21.
//

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	brain = new Brain;
	printMsg("--CAT Default Constructor here");
}

//Copy constructor
Cat::Cat(const Cat &orig)
{
	brain = new Brain;
	*this = orig;
	printMsg("--CAT Copy Constructor here");
}

//Desrtructor
Cat::~Cat(){
	delete brain;
	printMsg("--CAT Destructor here");
}

Cat &Cat::operator=(const Cat &orig) {
	if (this == &orig)
		return *this;
	this->_type = orig.getType();
	*(this->brain) = *(orig.brain);
	return *this;
}

void Cat::makeSound() const{
	printMsg(this->_type +  " says: \"Meow-meow!\"");
}

Brain *Cat::getBrain() const {
	return brain;
}
