//
// Created by  Anastasia on 09.10.2021.
//

#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");


	me->equip(tmp);
	me->unequip(5);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	printMsg("---MY OWN TESTS---");

	printMsg("------TEST #1: try to use nonexistent materia...");
	me->use(3, *bob);
	printMsg("         me->use(3, *bob)");
	printMsg("------PASSED!");

	printMsg("------TEST #2: try to unequip nonexistent materia...");
	me->unequip(3);
	printMsg("         me->unequip(3)");
	printMsg("------PASSED!");

	printMsg("------TEST #3: try to unequip and use after thar...");
	me->unequip(2);
	printMsg("         me->unequip(2)");
	me->use(2, *bob);
	printMsg("         me->use(2, *bob)");
	printMsg("------PASSED!");

	printMsg("------TEST #4: try to create nonexistent type of materia...");
	//попытка создать несуществующую материю
	tmp = src->createMateria("nu");
	printMsg("------PASSED!");

	delete bob;
	delete me;
	delete src;
	return 0;
}
