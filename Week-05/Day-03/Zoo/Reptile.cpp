//
// Created by Akos on 2018. 11. 21..
//

#include "Reptile.h"
#include <iostream>

Reptile::Reptile(std::string name) : Animal(name) {}

std::string Reptile::getName() const {
    return _name;
}

std::string Reptile::breed() const{
    return" laying eggs.";

}
