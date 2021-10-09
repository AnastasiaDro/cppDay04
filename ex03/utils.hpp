//
// Created by Cesar Erebus on 10/5/21.
//

#ifndef DAY04_UTILS_HPP
# define DAY04_UTILS_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

void	printMsg(std::string const &msg);

void	initMatArray(int size, AMateria **ptr);

void 	freeMatArray(int size, AMateria **ptr);

#endif //DAY04_UTILS_HPP
