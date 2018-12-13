//
// Created by Akos on 2018. 11. 21..
//

#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H
#include "Vehicle.h"
#include "Flyable.h"


class Helicopter: public Flyable,Vehicle {
public:
    void land() const;
    void fly() const;
    void takeOff() const;
};


#endif //FLYABLE_HELICOPTER_H
