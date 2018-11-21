//
// Created by Akos on 2018. 11. 21..
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H
#include "StringedInstrument.h"

class Violin: public StringedInstrument {
public:
    Violin();
    Violin(int numberOfStrings);
    void sound() const;
    void play() const;
};


#endif //INSTRUMENTS_VIOLIN_H
