//
// Created by  Anastasia on 09.10.2021.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

//#include "ICharacter.hpp"
#include <string>
#include "ICharacter.hpp"

class AMateria {
protected:
	std::string _type;
	AMateria();
public:
	AMateria(std::string const & type);

	AMateria(AMateria const &orig); //copy constructor
	virtual ~AMateria();

	//operators' overloading
	AMateria &operator=(const AMateria &orig);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //DAY04_AMATERIA_HPP
