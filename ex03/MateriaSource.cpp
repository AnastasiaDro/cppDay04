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
	freeMatArray(_materNum, this->_materias);
	for (int i = 0; i < _materNum; i++)
		this->_materias[i] = orig._materias[i];
	return *this;
}

MateriaSource::~MateriaSource() {
	freeMatArray(_materNum, this->_materias);
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < _materNum; i++)
	{
		if (!this->_materias[i])
		{
			this->_materias[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < _materNum; i++) {
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	printMsg("I don't now this type of materia");
	return nullptr;
}

