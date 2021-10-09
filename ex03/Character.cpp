//
// Created by  Anastasia on 09.10.2021.
//

#include "Character.hpp"

Character::Character() {
    this->_name = "NoName";
    capacity = materNum;
    materias = new AMateria *[materNum];
}

Character::Character(std::string name) {
    this->_name = name;
    capacity = materNum;
    materias = new AMateria *[materNum];
}

Character::~Character() {
    delete materias;
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria *m) {
    if (this->capacity == 0 || !m)
        return ;
    this->materias[materNum - this->capacity] = m; 
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= this->materNum)
        return;
    this->materias[idx] = nullptr;
}


