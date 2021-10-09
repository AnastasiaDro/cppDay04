//
// Created by  Anastasia on 09.10.2021.
//

#ifndef DAY04_AMATERIA_HPP
#define DAY04_AMATERIA_HPP


#include <string>

class AMateria {
protected:
	std::string _type;
	AMateria();
public:
	AMateria(std::string const & type);

//	Animal(Animal const &orig);	//copy constructor
//	//destructor
//	virtual ~Animal();
//
//	//operators' overloading
//	Animal &operator=(const Animal &orig);

	AMateria(AMateria const &orig); //copy constructor
	virtual ~AMateria();

	//operators' overloading
	AMateria &operator=(const AMateria &orig);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //DAY04_AMATERIA_HPP
