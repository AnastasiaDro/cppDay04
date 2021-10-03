#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main() {
	int num;

	num = 10;
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
}