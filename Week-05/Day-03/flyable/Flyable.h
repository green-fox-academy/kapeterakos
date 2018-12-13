//
// Created by Akos on 2018. 11. 21..
//

#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H


class Flyable {
public:


    virtual void land() const =0;
    virtual void fly() const =0;
    virtual void takeOff() const =0;
};


#endif //FLYABLE_FLYABLE_H
