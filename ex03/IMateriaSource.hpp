//
// Created by  Anastasia on 09.10.2021.
//

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //DAY04_IMATERIASOURCE_HPP
