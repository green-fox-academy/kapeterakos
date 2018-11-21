//
// Created by Akos on 2018. 11. 21..
//

#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar: public StringedInstrument {
public:
    ElectricGuitar();
    ElectricGuitar(int numberOfStrings);
    void sound() const;
    void play() const;
};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
