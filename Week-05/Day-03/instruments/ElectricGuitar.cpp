//
// Created by Akos on 2018. 11. 21..
//

#include "ElectricGuitar.h"

void ElectricGuitar::sound() const {
    std::cout<<"Twang"<<std::endl;
}

void ElectricGuitar::play() const {
    std::cout<<_name <<" a" << _numberOfStrings <<"-stringed instrument that goes Twang"<<std::endl;
}

ElectricGuitar::ElectricGuitar():StringedInstrument("Electric guitar",6) {}

ElectricGuitar::ElectricGuitar(int numberOfStrings):StringedInstrument("Electric guitar",numberOfStrings) {}