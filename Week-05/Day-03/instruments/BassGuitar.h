//
// Created by Akos on 2018. 11. 21..
//

#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument{
public:

    BassGuitar();
    BassGuitar(int numberOfStrings);
    void sound() const;
    void play() const;
};


#endif //INSTRUMENTS_BASSGUITAR_H
