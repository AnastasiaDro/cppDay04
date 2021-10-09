//
// Created by Cesar Erebus on 10/5/21.
//

#include "utils.hpp"

void	printMsg(std::string const &msg)
{
	std::cout << msg << std::endl;
}

void initMatArray(int size, AMateria **ptr)
{
	for(int i = 0; i < size; i++)
		ptr[i] = nullptr;
}

void freeMatArray(int size, AMateria **ptr) {
	for(int i = 0; i < size; i++)
		delete ptr[i];
	delete ptr;
}