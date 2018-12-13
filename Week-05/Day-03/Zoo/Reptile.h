//
// Created by Akos on 2018. 11. 21..
//

#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H
#include "Animal.h"

class Reptile: public Animal {
public:
    Reptile(std::string name);
    std::string getName() const;
   std::string breed() const;

};


#endif //ZOO_REPTILE_H
