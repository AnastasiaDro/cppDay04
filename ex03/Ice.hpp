//
// Created by  Anastasia on 09.10.2021.
//

#ifndef DAY04_ICE_HPP
#define DAY04_ICE_HPP


#include "AMateria.hpp"

class Ice : public virtual AMateria {
public:
	Ice();
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);


	Ice(Ice const &orig); //copy constructor
	virtual ~Ice();

	//operators' overloading
	Ice &operator=(const Ice &orig);
};


#endif //DAY04_ICE_HPP
