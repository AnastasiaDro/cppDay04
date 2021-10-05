#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main(){
	int num;

	num = 10;
	//We can't create an object os Animal class
//	Animal animal;

	//We can create a pointer to animal
	printMsg("\n-----ANIMAL POINTER-----\n");
	Animal *animalPtr;
	animalPtr = new Dog;
	delete animalPtr;

	printMsg("\n-----AN ARRAY OF ANIMAL POINTERS-----\n");
	Animal *animals[num];
	for(int i = 0; i < num/2; i++)
	{
		std::cout << i << " ";
		animals[i] = new Dog;
	}
	for(int i = num/2; i < num; i++)
	{
		std::cout << i << " ";
		animals[i] = new Cat;
	}
	printMsg("\n-----AND DELETING NOW-----\n");

	while (--num >= 0)
	{
		std::cout << num << " ";
		delete animals[num];
	}

	printMsg("\n-----DEEP COPYING DEMONSTRATION #1-----\n");
	Dog dog;
	Cat cat;
	{
		Dog tmp1 = dog;
		Cat tmp2 = Cat(cat);
	}
	printMsg("\nThe dog's idea #0 is... " + dog.getBrain()->getIdea(0) );
	printMsg("The cat's idea #0 is... " + cat.getBrain()->getIdea(0) + "\n");

	printMsg("\n-----DEEP COPYING DEMONSTRATION #2-----\n");

	Dog test1 = dog;
	Cat test2 = cat;

	printMsg("\n---test1 is a copy of dog, test1 idea #0 is ... " + test1.getBrain()->getIdea(0));
	printMsg("---test2 is a copy of cat, test2 idea #0 is ... " + test2.getBrain()->getIdea(0));

	printMsg("\n-Let's change test1's and test2's ideas #0");
	test1.getBrain()->setIdea(0, "to eat Prada shoes");
	test2.getBrain()->setIdea(0, "to piss into slippers");
	printMsg("\n---test1 is a copy of dog, test1 idea #0 is ... " + test1.getBrain()->getIdea(0));
	printMsg("---test2 is a copy of cat, test2 idea #0 is ... " + test2.getBrain()->getIdea(0));

	printMsg("\n-But ideas #0 of the origin cat and dog is still:");
	printMsg("\nThe dog's idea #0 is... " + dog.getBrain()->getIdea(0) );
	printMsg("The cat's idea #0 is... " + cat.getBrain()->getIdea(0) + "\n");

}