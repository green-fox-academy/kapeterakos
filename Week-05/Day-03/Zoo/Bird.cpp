//
// Created by Akos on 2018. 11. 21..
//

#include "Bird.h"
#include <iostream>

Bird::Bird(std::string name) : Animal(name) {
}

std::string Bird::getName() const {
    return _name;
}

std::string Bird::breed() const {
    return "laying eggs.";

}
