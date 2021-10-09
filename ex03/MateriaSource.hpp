//
// Created by  Anastasia on 09.10.2021.
//

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "utils.hpp"

class MateriaSource : public IMateriaSource{
private:
	AMateria **_materias;
	static const int _materNum = 4;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &orig); //copy constructor
	virtual ~MateriaSource();

	MateriaSource &operator=(const MateriaSource &orig);

	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //MATERIASOURCE_HPP
