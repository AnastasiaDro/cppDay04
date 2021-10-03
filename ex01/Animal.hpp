//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string _type;
public:
	//constructors
	Animal();
	Animal(std::string &_type);
	Animal(Animal const &orig);	//copy constructor
	//destructor
	virtual ~Animal();

	//operators' overloading
	Animal &operator=(const Animal &orig);

	//getter
	const std::string &getType() const;

	virtual void makeSound() const;
};

void	printMsg(std::string const &msg);

#endif //ANIMAL_HPP
