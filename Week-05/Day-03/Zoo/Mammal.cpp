//
// Created by Akos on 2018. 11. 21..
//

#include "Mammal.h"
#include <iostream>
Mammal::Mammal(std::string name) : Animal(name) {}

std::string Mammal::getName() const {
    return _name;
}

std::string Mammal::breed() const {
    return "pushing miniature versions out.";
}
