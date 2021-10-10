//
// Created by Cesar Erebus on 10/3/21.
//

#include "Brain.hpp"
#include "utils.hpp"

Brain::Brain() {
	_ideas[0] = "Wanna eat";
	_ideas[1] = "Wanna sleep";
	printMsg("--BRAIN default constructor here");
}

Brain::Brain(const Brain &orig) {
	*this = orig;
	printMsg("--BRAIN copy constructor here");
}

Brain &Brain::operator=(const Brain &orig) {
	if(this == &orig)
		return *this;
	for (int i = 0; i < _num; i++) {
		this->_ideas[i] = orig._ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int number) const{
	return this->_ideas[number];
}


void Brain::setIdea(int number, const std::string& idea)
{
	this->_ideas[number] = idea;
}

Brain::~Brain() {
	printMsg("--BRAIN Destructor here");
}

