//
// Created by Cesar Erebus on 10/3/21.
//

#ifndef DAY04_BRAIN_HPP
#define DAY04_BRAIN_HPP


#include <string>

class Brain {

private:
	static const int _num = 100;
	std::string _ideas[_num];
public:
	Brain();
	Brain(const Brain &orig); // copy constructor

	Brain &operator=(const Brain &orig);

	std::string getIdea(int number) const;
	void setIdea(int number, std::string idea);
};


#endif //DAY04_BRAIN_HPP
