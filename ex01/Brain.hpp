//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef DAY04_BRAIN_HPP
#define DAY04_BRAIN_HPP


#include <string>

class Brain {

private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &orig); // copy constructor

};


#endif //DAY04_BRAIN_HPP
