//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef DAY04_CAT_HPP
#define DAY04_CAT_HPP


#include <string>
#include "Animal.hpp"

class Cat : public virtual Animal {
public:
	Cat();
	Cat(const Cat &orig); //copy constructor
	//destructor
	~Cat();

	//operators overloading
	Cat &operator=(const Cat &orig);

	virtual void makeSound() const;
};


#endif //DAY04_CAT_HPP