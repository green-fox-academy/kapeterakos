//
// Created by Akos on 2018. 11. 21..
//

#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H
#include "Animal.h"
#include "Flyable.h"

class Bird: public Animal, Flyable {
public:
    void land() const;
    void fly() const;
    void takeOff() const;

};


#endif //FLYABLE_BIRD_H
