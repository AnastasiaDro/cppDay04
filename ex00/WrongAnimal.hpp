//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string _type;
public:
	//constructors
	WrongAnimal();
	WrongAnimal(std::string &_type);
	WrongAnimal(WrongAnimal const &orig);	//copy constructor
	//destructor
	virtual ~WrongAnimal();

	//operators' overloading
	WrongAnimal &operator=(const WrongAnimal &orig);

	//getter
	const std::string &getType() const;

	void makeSound() const;
};

void	printMsg(std::string const &msg);

#endif //ANIMAL_HPP
