//
// Created by Akos on 2018. 11. 21..
//

#ifndef ZOO_BIRDS_H
#define ZOO_BIRDS_H
#include "Animal.h"

class Bird: public Animal {
public:
    Bird(std::string name);
    std::string getName() const;
    std::string breed() const;

};


#endif //ZOO_BIRDS_H
