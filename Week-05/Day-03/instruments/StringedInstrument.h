//
// Created by Akos on 2018. 11. 21..
//

#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"


class StringedInstrument: public Instrument {
public:

    StringedInstrument(std::string name,int numberOfStrings);
    virtual void sound()const = 0;
    virtual void play()const = 0;


protected:
    int _numberOfStrings;

};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
