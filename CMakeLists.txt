cmake_minimum_required(VERSION 3.20)
project(Day04)

set(CMAKE_CXX_STANDARD 98)

#add_executable(Day04 ex00/main.cpp ex00/Animal.cpp ex00/Animal.hpp ex00/Dog.cpp ex00/Dog.hpp ex00/Cat.cpp ex00/Cat.hpp)

#add_executable(Day04 ex01/main.cpp ex01/Animal.cpp ex01/Animal.hpp ex01/Dog.cpp ex01/Dog.hpp ex01/Cat.cpp ex01/Cat.hpp ex01/Brain.cpp ex01/Brain.hpp
#        ex01/utils.cpp ex01/utils.hpp)

#add_executable(Day04 ex02/main.cpp ex02/Animal.cpp ex02/Animal.hpp ex02/Dog.cpp ex02/Dog.hpp ex02/Cat.cpp ex02/Cat.hpp ex02/Brain.cpp ex02/Brain.hpp
#        ex02/utils.cpp ex02/utils.hpp)

add_executable(Day04 ex03/AMateria.cpp ex03/AMateria.hpp ex03/Ice.cpp ex03/Ice.hpp
                ex03/Cure.cpp ex03/Cure.hpp ex03/utils.cpp ex03/utils.hpp ex03/main.cpp ex03/ICharacter.cpp ex03/ICharacter.hpp ex03/Character.cpp ex03/Character.hpp ex03/IMateriaSource.cpp ex03/IMateriaSource.hpp ex03/MateriaSource.cpp ex03/MateriaSource.hpp)