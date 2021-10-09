//
// Created by  Anastasia on 09.10.2021.
//

#ifndef DAY04_CURE_HPP
#define DAY04_CURE_HPP


#include "AMateria.hpp"

class Cure : public virtual AMateria {

public:
	Cure();
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);

	Cure(Cure const &orig); //copy constructor
	virtual ~Cure();

	//operators' overloading
	Cure &operator=(const Cure &orig);
};


#endif //DAY04_CURE_HPP
