//
// Created by Akos on 2018. 11. 21..
//

#include "BassGuitar.h"

BassGuitar::BassGuitar():StringedInstrument("Bass Guitar",4) {}

BassGuitar::BassGuitar(int numberOfStrings):StringedInstrument("Bass guitar",numberOfStrings) {}

void BassGuitar::sound() const{
    std::cout<<"Duum-dumm-duum"<<std::endl;
}

void BassGuitar::play() const {
    std::cout<<_name<<" a "<<_numberOfStrings <<"-stringed instrument that goes Duum-duum-duum"<<std::endl;
}