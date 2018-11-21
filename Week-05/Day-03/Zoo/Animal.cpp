//
// Created by Akos on 2018. 11. 21..
//

#include "Animal.h"

Animal::Animal(std::string name) : _name(name) {}

int Animal::getAge() const {
    return _age;
}
