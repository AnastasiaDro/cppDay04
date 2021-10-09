//
// Created by  Anastasia on 09.10.2021.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	this->_materias = new AMateria *[_materNum];
	initMatArray(_materNum, this->_materias);
}

MateriaSource::MateriaSource(const MateriaSource &orig) {
	*this = orig;
	printMsg("--MATERIASOURCE copy constructor here");
}

MateriaSource &MateriaSource::operator=(const MateriaSource &orig) {
	if (this == &orig)
		return *this;
//	freeMatArray(_materNum, this->_materias);
	for (int i = 0; i < _materNum; i++)
		this->_materias[i] = orig._materias[i];
	return *this;
}

MateriaSource::~MateriaSource() {
	freeMatArray(_materNum, this->_materias);
}

void MateriaSource::learnMateria(AMateria *m) {

//	learnMateria must copy the Materia passed as a parameter, and store it in memory
//	to be cloned later. Much in the same way as for Character , the Source can know at
//	most 4 Materia, which are not necessarily unique.
	for (int i = 0; i < _materNum; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m->clone();
			break;
		}
	}
}


//createMateria(std::string const &) will return a new Materia, which will be a
//copy of the Materia (previously learned by the Source) which type equals the parameter.
//Returns 0 if the type is unknow
AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < _materNum; i++) {
		if (this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	return nullptr;
}

