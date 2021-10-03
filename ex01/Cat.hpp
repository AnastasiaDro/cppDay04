//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef CAT_HPP
#define CAT_HPP


#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public virtual Animal {
private:
	Brain *brain;
public:
	Cat();
	Cat(const Cat &orig); //copy constructor
	//destructor
	virtual ~Cat();

	//operators overloading
	Cat &operator=(const Cat &orig);

	virtual void makeSound() const;
};


#endif //CAT_HPP
