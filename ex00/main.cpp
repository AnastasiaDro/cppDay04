#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	printMsg("\n-----VERY-VERY WrongAnimal and WrongCat now-----");
	const WrongAnimal *w_meta = new WrongAnimal();
	const WrongAnimal *w_j = new WrongCat();
	std::cout << w_j->getType() << " " << std::endl;
	w_j->makeSound(); //will output the w_meta sound!
	w_meta->makeSound();
}