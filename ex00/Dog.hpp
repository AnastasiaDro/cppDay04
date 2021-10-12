//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"

class Dog: public virtual Animal
{
public:
	Dog();
	Dog(Dog const &orig); //copy constructor
	//destructor
	virtual ~Dog();

	//operators overloading
	Dog &operator=(const Dog &orig);

	virtual void makeSound() const;
};


#endif //DAY04_DOG_HPP
