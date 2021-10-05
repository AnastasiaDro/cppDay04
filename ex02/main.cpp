#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main(){
	int num;

	num = 2;
	//We can't create an object os Animal class
//	Animal animal;
	//We can create a pointer to animals;
	Animal *animalPtr;
	animalPtr = new Dog;
	printMsg("animalPtrs's type is ... " + animalPtr->getType());
	//We can create an array of pointers of animals;
	Animal *animals[num];

	animals[0] = new Dog;
	animals[1] = new Cat;

	printMsg("\n-----AND DELETING NOW-----\n");

	while (--num >= 0)
	{
		std::cout << num << " ";
		delete animals[num];
	}
	delete animalPtr;


}