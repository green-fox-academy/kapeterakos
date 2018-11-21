//
// Created by Akos on 2018. 11. 21..
//

#ifndef INSTRUMENTS_INSTRUMENT_H
#define INSTRUMENTS_INSTRUMENT_H


#include <string>
#include <iostream>

class Instrument {
public:
    virtual void play() const = 0;
    virtual void sound() const = 0;
    Instrument(std::string name);




protected:
    std::string _name;
};


#endif //INSTRUMENTS_INSTRUMENT_H
