//
// Created by Cesar Erebus on 10/3/21.
//

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	printMsg("WRONG_CAT Default Constructor here");
}

//Copy constructor
WrongCat::WrongCat(const WrongCat &orig)
{
	*this = orig;
	printMsg("WRONG_CAT Copy Constructor here");
}

//Desrtructor
WrongCat::~WrongCat(){
	printMsg("WRONG_CAT Destructor here");
}

WrongCat &WrongCat::operator=(const WrongCat &orig) {
	this->_type = orig.getType();
	return *this;
}

void WrongCat::makeSound() const{
	printMsg(this->_type +  " says: \"Meow-meow!\"");
}
