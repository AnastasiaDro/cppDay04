//
// Created by  Anastasia on 09.10.2021.
//

#include "Character.hpp"
#include "utils.hpp"

Character::Character() {
    this->_name = "NoName";
    materias = new AMateria *[materNum];
	initMatArray(materNum, materias);
}

Character::Character(std::string const &name) {
    this->_name = name;
    materias = new AMateria *[materNum];
	initMatArray(materNum, materias);
}

Character::Character(const Character &orig) {
	*this = orig;
	printMsg("--CHARACTER copy constructor here");
}

Character::~Character() {
	freeMatArray(materNum, this->materias);
}

Character &Character::operator=(const Character &orig)
{
	if(this == &orig)
		return *this;
	freeMatArray(materNum, this->materias);
	for(int i = 0; i < materNum; i++)
		this->materias[i] = orig.materias[i];
	return *this;
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < materNum; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= materNum)
        return;
    this->materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= materNum || !materias[idx])
		return;
	this->materias[idx]->use(target);
}






