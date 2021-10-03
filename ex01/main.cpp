#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"



int main() {
	int num;

	num = 10;
	Animal *animals[num];
	for(int i = 0; i < num/2; i++)
		animals[num] = new Dog;
	for(int i = num/2; i < num; i++)
		animals[num] = new Cat;
}