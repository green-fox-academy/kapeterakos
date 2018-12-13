//
// Created by Akos on 2018. 11. 21..
//

#ifndef ZOO_MAMAL_H
#define ZOO_MAMAL_H
#include "Animal.h"
#include <iostream>

class Mammal: public Animal {
public:
    Mammal(std::string name);
    std::string getName() const;
    std::string breed()const ;
};


#endif //ZOO_MAMAL_H
