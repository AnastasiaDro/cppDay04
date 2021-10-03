//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public virtual Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &orig); //copy constructor
	//destructor
	~Dog();

	//operators overloading
	Dog &operator=(const Dog &orig);

	virtual void makeSound() const;
};


#endif //DOG_HPP
