//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP


#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public virtual WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &orig); //copy constructor
	//destructor
	~WrongCat();

	//operators overloading
	WrongCat &operator=(const WrongCat &orig);

	void makeSound() const;
};


#endif //DAY04_CAT_HPP
